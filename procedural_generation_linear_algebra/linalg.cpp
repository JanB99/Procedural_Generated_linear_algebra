#include <math.h>

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

double mag (V2F a) {
	double result = 0.0;
	for (int i = 0; i < 2; i++) result += (double)a.c[i] * (double)a.c[i];
	return sqrt(result);
}

double dist (V2F a, V2F b) {
	double result = 0.0;
	for (int i = 0; i < 2; i++) result += pow((double)a.c[i] - (double)b.c[i], 2);
	return sqrt(result);
}

double dot (V2F a, V2F b) {
	double result = 0.0;
	for (int i = 0; i < 2; i++) result += (double)a.c[i] * (double)b.c[i];
	return result;
}

V2F V2FI (float a) {
	V2F result;
	for (int i = 0; i < 2; i++) result.c[i] = a;
	return result;
}

V2F norm (V2F a) {
	return V2F_div(a, V2FI(mag(a)));
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

double mag (V2D a) {
	double result = 0.0;
	for (int i = 0; i < 2; i++) result += (double)a.c[i] * (double)a.c[i];
	return sqrt(result);
}

double dist (V2D a, V2D b) {
	double result = 0.0;
	for (int i = 0; i < 2; i++) result += pow((double)a.c[i] - (double)b.c[i], 2);
	return sqrt(result);
}

double dot (V2D a, V2D b) {
	double result = 0.0;
	for (int i = 0; i < 2; i++) result += (double)a.c[i] * (double)b.c[i];
	return result;
}

V2D V2DI (double a) {
	V2D result;
	for (int i = 0; i < 2; i++) result.c[i] = a;
	return result;
}

V2D norm (V2D a) {
	return V2D_div(a, V2DI(mag(a)));
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

double mag (V2I a) {
	double result = 0.0;
	for (int i = 0; i < 2; i++) result += (double)a.c[i] * (double)a.c[i];
	return sqrt(result);
}

double dist (V2I a, V2I b) {
	double result = 0.0;
	for (int i = 0; i < 2; i++) result += pow((double)a.c[i] - (double)b.c[i], 2);
	return sqrt(result);
}

double dot (V2I a, V2I b) {
	double result = 0.0;
	for (int i = 0; i < 2; i++) result += (double)a.c[i] * (double)b.c[i];
	return result;
}

V2I V2II (int a) {
	V2I result;
	for (int i = 0; i < 2; i++) result.c[i] = a;
	return result;
}

V2I norm (V2I a) {
	return V2I_div(a, V2II(mag(a)));
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

double mag (V3F a) {
	double result = 0.0;
	for (int i = 0; i < 3; i++) result += (double)a.c[i] * (double)a.c[i];
	return sqrt(result);
}

double dist (V3F a, V3F b) {
	double result = 0.0;
	for (int i = 0; i < 3; i++) result += pow((double)a.c[i] - (double)b.c[i], 2);
	return sqrt(result);
}

double dot (V3F a, V3F b) {
	double result = 0.0;
	for (int i = 0; i < 3; i++) result += (double)a.c[i] * (double)b.c[i];
	return result;
}

V3F V3FI (float a) {
	V3F result;
	for (int i = 0; i < 3; i++) result.c[i] = a;
	return result;
}

V3F norm (V3F a) {
	return V3F_div(a, V3FI(mag(a)));
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

double mag (V3D a) {
	double result = 0.0;
	for (int i = 0; i < 3; i++) result += (double)a.c[i] * (double)a.c[i];
	return sqrt(result);
}

double dist (V3D a, V3D b) {
	double result = 0.0;
	for (int i = 0; i < 3; i++) result += pow((double)a.c[i] - (double)b.c[i], 2);
	return sqrt(result);
}

double dot (V3D a, V3D b) {
	double result = 0.0;
	for (int i = 0; i < 3; i++) result += (double)a.c[i] * (double)b.c[i];
	return result;
}

V3D V3DI (double a) {
	V3D result;
	for (int i = 0; i < 3; i++) result.c[i] = a;
	return result;
}

V3D norm (V3D a) {
	return V3D_div(a, V3DI(mag(a)));
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

double mag (V3I a) {
	double result = 0.0;
	for (int i = 0; i < 3; i++) result += (double)a.c[i] * (double)a.c[i];
	return sqrt(result);
}

double dist (V3I a, V3I b) {
	double result = 0.0;
	for (int i = 0; i < 3; i++) result += pow((double)a.c[i] - (double)b.c[i], 2);
	return sqrt(result);
}

double dot (V3I a, V3I b) {
	double result = 0.0;
	for (int i = 0; i < 3; i++) result += (double)a.c[i] * (double)b.c[i];
	return result;
}

V3I V3II (int a) {
	V3I result;
	for (int i = 0; i < 3; i++) result.c[i] = a;
	return result;
}

V3I norm (V3I a) {
	return V3I_div(a, V3II(mag(a)));
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

double mag (V4F a) {
	double result = 0.0;
	for (int i = 0; i < 4; i++) result += (double)a.c[i] * (double)a.c[i];
	return sqrt(result);
}

double dist (V4F a, V4F b) {
	double result = 0.0;
	for (int i = 0; i < 4; i++) result += pow((double)a.c[i] - (double)b.c[i], 2);
	return sqrt(result);
}

double dot (V4F a, V4F b) {
	double result = 0.0;
	for (int i = 0; i < 4; i++) result += (double)a.c[i] * (double)b.c[i];
	return result;
}

V4F V4FI (float a) {
	V4F result;
	for (int i = 0; i < 4; i++) result.c[i] = a;
	return result;
}

V4F norm (V4F a) {
	return V4F_div(a, V4FI(mag(a)));
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

double mag (V4D a) {
	double result = 0.0;
	for (int i = 0; i < 4; i++) result += (double)a.c[i] * (double)a.c[i];
	return sqrt(result);
}

double dist (V4D a, V4D b) {
	double result = 0.0;
	for (int i = 0; i < 4; i++) result += pow((double)a.c[i] - (double)b.c[i], 2);
	return sqrt(result);
}

double dot (V4D a, V4D b) {
	double result = 0.0;
	for (int i = 0; i < 4; i++) result += (double)a.c[i] * (double)b.c[i];
	return result;
}

V4D V4DI (double a) {
	V4D result;
	for (int i = 0; i < 4; i++) result.c[i] = a;
	return result;
}

V4D norm (V4D a) {
	return V4D_div(a, V4DI(mag(a)));
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

double mag (V4I a) {
	double result = 0.0;
	for (int i = 0; i < 4; i++) result += (double)a.c[i] * (double)a.c[i];
	return sqrt(result);
}

double dist (V4I a, V4I b) {
	double result = 0.0;
	for (int i = 0; i < 4; i++) result += pow((double)a.c[i] - (double)b.c[i], 2);
	return sqrt(result);
}

double dot (V4I a, V4I b) {
	double result = 0.0;
	for (int i = 0; i < 4; i++) result += (double)a.c[i] * (double)b.c[i];
	return result;
}

V4I V4II (int a) {
	V4I result;
	for (int i = 0; i < 4; i++) result.c[i] = a;
	return result;
}

V4I norm (V4I a) {
	return V4I_div(a, V4II(mag(a)));
}

