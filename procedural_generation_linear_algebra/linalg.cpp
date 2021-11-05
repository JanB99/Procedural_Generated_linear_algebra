typedef struct { float c[2]; } V2F;
typedef struct { double c[2]; } V2D;
typedef struct { int c[2]; } V2I;
typedef struct { float c[3]; } V3F;
typedef struct { double c[3]; } V3D;
typedef struct { int c[3]; } V3I;
typedef struct { float c[4]; } V4F;
typedef struct { double c[4]; } V4D;
typedef struct { int c[4]; } V4I;

// Generated arithmetic functions of vector type: V2F
V2F V2F_add (V2F a, V2F b) {
	for (int i = 0; i < 2; i++) a.c[i] += b.c[i];
	return a; 
}

V2F V2F_sub (V2F a, V2F b) {
	for (int i = 0; i < 2; i++) a.c[i] -= b.c[i];
	return a; 
}

V2F V2F_mul (V2F a, V2F b) {
	for (int i = 0; i < 2; i++) a.c[i] *= b.c[i];
	return a; 
}

V2F V2F_div (V2F a, V2F b) {
	for (int i = 0; i < 2; i++) a.c[i] /= b.c[i];
	return a; 
}

V2F V2FI (float a) {
	V2F result;
	for (int i = 0; i < 2; i++) result.c[i] = a;
	return result; 
}

// Generated arithmetic functions of vector type: V2D
V2D V2D_add (V2D a, V2D b) {
	for (int i = 0; i < 2; i++) a.c[i] += b.c[i];
	return a; 
}

V2D V2D_sub (V2D a, V2D b) {
	for (int i = 0; i < 2; i++) a.c[i] -= b.c[i];
	return a; 
}

V2D V2D_mul (V2D a, V2D b) {
	for (int i = 0; i < 2; i++) a.c[i] *= b.c[i];
	return a; 
}

V2D V2D_div (V2D a, V2D b) {
	for (int i = 0; i < 2; i++) a.c[i] /= b.c[i];
	return a; 
}

V2D V2DI (double a) {
	V2D result;
	for (int i = 0; i < 2; i++) result.c[i] = a;
	return result; 
}

// Generated arithmetic functions of vector type: V2I
V2I V2I_add (V2I a, V2I b) {
	for (int i = 0; i < 2; i++) a.c[i] += b.c[i];
	return a; 
}

V2I V2I_sub (V2I a, V2I b) {
	for (int i = 0; i < 2; i++) a.c[i] -= b.c[i];
	return a; 
}

V2I V2I_mul (V2I a, V2I b) {
	for (int i = 0; i < 2; i++) a.c[i] *= b.c[i];
	return a; 
}

V2I V2I_div (V2I a, V2I b) {
	for (int i = 0; i < 2; i++) a.c[i] /= b.c[i];
	return a; 
}

V2I V2II (int a) {
	V2I result;
	for (int i = 0; i < 2; i++) result.c[i] = a;
	return result; 
}

// Generated arithmetic functions of vector type: V3F
V3F V3F_add (V3F a, V3F b) {
	for (int i = 0; i < 3; i++) a.c[i] += b.c[i];
	return a; 
}

V3F V3F_sub (V3F a, V3F b) {
	for (int i = 0; i < 3; i++) a.c[i] -= b.c[i];
	return a; 
}

V3F V3F_mul (V3F a, V3F b) {
	for (int i = 0; i < 3; i++) a.c[i] *= b.c[i];
	return a; 
}

V3F V3F_div (V3F a, V3F b) {
	for (int i = 0; i < 3; i++) a.c[i] /= b.c[i];
	return a; 
}

V3F V3FI (float a) {
	V3F result;
	for (int i = 0; i < 3; i++) result.c[i] = a;
	return result; 
}

// Generated arithmetic functions of vector type: V3D
V3D V3D_add (V3D a, V3D b) {
	for (int i = 0; i < 3; i++) a.c[i] += b.c[i];
	return a; 
}

V3D V3D_sub (V3D a, V3D b) {
	for (int i = 0; i < 3; i++) a.c[i] -= b.c[i];
	return a; 
}

V3D V3D_mul (V3D a, V3D b) {
	for (int i = 0; i < 3; i++) a.c[i] *= b.c[i];
	return a; 
}

V3D V3D_div (V3D a, V3D b) {
	for (int i = 0; i < 3; i++) a.c[i] /= b.c[i];
	return a; 
}

V3D V3DI (double a) {
	V3D result;
	for (int i = 0; i < 3; i++) result.c[i] = a;
	return result; 
}

// Generated arithmetic functions of vector type: V3I
V3I V3I_add (V3I a, V3I b) {
	for (int i = 0; i < 3; i++) a.c[i] += b.c[i];
	return a; 
}

V3I V3I_sub (V3I a, V3I b) {
	for (int i = 0; i < 3; i++) a.c[i] -= b.c[i];
	return a; 
}

V3I V3I_mul (V3I a, V3I b) {
	for (int i = 0; i < 3; i++) a.c[i] *= b.c[i];
	return a; 
}

V3I V3I_div (V3I a, V3I b) {
	for (int i = 0; i < 3; i++) a.c[i] /= b.c[i];
	return a; 
}

V3I V3II (int a) {
	V3I result;
	for (int i = 0; i < 3; i++) result.c[i] = a;
	return result; 
}

// Generated arithmetic functions of vector type: V4F
V4F V4F_add (V4F a, V4F b) {
	for (int i = 0; i < 4; i++) a.c[i] += b.c[i];
	return a; 
}

V4F V4F_sub (V4F a, V4F b) {
	for (int i = 0; i < 4; i++) a.c[i] -= b.c[i];
	return a; 
}

V4F V4F_mul (V4F a, V4F b) {
	for (int i = 0; i < 4; i++) a.c[i] *= b.c[i];
	return a; 
}

V4F V4F_div (V4F a, V4F b) {
	for (int i = 0; i < 4; i++) a.c[i] /= b.c[i];
	return a; 
}

V4F V4FI (float a) {
	V4F result;
	for (int i = 0; i < 4; i++) result.c[i] = a;
	return result; 
}

// Generated arithmetic functions of vector type: V4D
V4D V4D_add (V4D a, V4D b) {
	for (int i = 0; i < 4; i++) a.c[i] += b.c[i];
	return a; 
}

V4D V4D_sub (V4D a, V4D b) {
	for (int i = 0; i < 4; i++) a.c[i] -= b.c[i];
	return a; 
}

V4D V4D_mul (V4D a, V4D b) {
	for (int i = 0; i < 4; i++) a.c[i] *= b.c[i];
	return a; 
}

V4D V4D_div (V4D a, V4D b) {
	for (int i = 0; i < 4; i++) a.c[i] /= b.c[i];
	return a; 
}

V4D V4DI (double a) {
	V4D result;
	for (int i = 0; i < 4; i++) result.c[i] = a;
	return result; 
}

// Generated arithmetic functions of vector type: V4I
V4I V4I_add (V4I a, V4I b) {
	for (int i = 0; i < 4; i++) a.c[i] += b.c[i];
	return a; 
}

V4I V4I_sub (V4I a, V4I b) {
	for (int i = 0; i < 4; i++) a.c[i] -= b.c[i];
	return a; 
}

V4I V4I_mul (V4I a, V4I b) {
	for (int i = 0; i < 4; i++) a.c[i] *= b.c[i];
	return a; 
}

V4I V4I_div (V4I a, V4I b) {
	for (int i = 0; i < 4; i++) a.c[i] /= b.c[i];
	return a; 
}

V4I V4II (int a) {
	V4I result;
	for (int i = 0; i < 4; i++) result.c[i] = a;
	return result; 
}

