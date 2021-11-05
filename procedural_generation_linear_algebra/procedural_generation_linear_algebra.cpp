#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdarg>
#include "linalg.cpp"

#define COUNT_TYPES 3
#define COUNT_OPERATORS 4

struct Data_types {
	const char* type;
	char type_def;
} types[COUNT_TYPES] = {
	{"float", 'F'},
	{"double", 'D'},
	{"int", 'I'},
};

struct Operators {
	const char* name;
	const char* operand;
} operators[COUNT_OPERATORS] = {
	{"add", "+="},
	{"sub", "-="},
	{"mul", "*="},
	{"div", "/="}
};

std::string vprintf(const char* fmt...) {
	va_list args;
	va_start(args, fmt);
	std::stringstream ss;

	while (*fmt != '\0') {
		if (*fmt == '%') {
			++fmt;
			if (*fmt == 'd') {
				int i = va_arg(args, int);
				ss << i;
			}
			else if (*fmt == 'c') {
				int c = va_arg(args, int);
				ss << (char)c;
			}
			else if (*fmt == 's') {
				const char* s = va_arg(args, const char*);
				ss << s;
			}
		}
		else {
			ss << *fmt;
		}
		++fmt;
	}
	va_end(args);
	return ss.str();
}

std::string fmt_type(int n, char stype) {
	std::stringstream ss;
	ss << "V" << n << stype;
	return ss.str();
}

void generate_typedef_struct(std::fstream* file, int n, const char* type, char stype) {
	*file << vprintf("typedef struct { %s c[%d]; } V%d%c;", type, n, n, stype) << std::endl;
}

void generate_operator_function(std::fstream* file, int n, const char* type, char stype, const char* op_name, const char* op) {
	*file << vprintf("V%d%c V%d%c_%s (V%d%c a, V%d%c b) {", n, stype, n, stype, op_name, n, stype, n, stype) << std::endl;
	*file << vprintf("\tfor (int i = 0; i < %d; i++) a.c[i] %s b.c[i];", n, op) << std::endl;
	*file << vprintf("\treturn a; \n}\n") << std::endl;
}

void generate_identity_function(std::fstream* file, int n, const char* type, char stype) {
	*file << vprintf("V%d%c V%d%cI (%s a) {", n, stype, n, stype, type) << std::endl;
	*file << vprintf("\tV%d%c result;", n, stype) << std::endl;
	*file << vprintf("\tfor (int i = 0; i < %d; i++) result.c[i] = a;", n) << std::endl;
	*file << vprintf("\treturn result; \n}\n") << std::endl;
}

int main()
{

	//std::cout << V2D_add(V2DI(2.2342), {1.4535, 3.24232}).c[0] << std::endl;

	std::fstream file ("linalg.cpp", std::ofstream::out | std::ofstream::trunc);
	
	for (int n = 2; n < 5; n++) {
		for (int i = 0; i < COUNT_TYPES; i++) {
			generate_typedef_struct(&file, n, types[i].type, types[i].type_def);
		}
	}
	file << "\n";

	for (int n = 2; n < 5; n++) {
		for (int i = 0; i < COUNT_TYPES; i++) {
			file << "// Generated arithmetic functions of vector type: " << fmt_type(n, types[i].type_def) << std::endl;
			for (int j = 0; j < COUNT_OPERATORS; j++) {
				generate_operator_function(&file, n, types[i].type, types[i].type_def, operators[j].name, operators[j].operand);
			}

			generate_identity_function(&file, n, types[i].type, types[i].type_def);
		}
	}
	
	file.close();
}
