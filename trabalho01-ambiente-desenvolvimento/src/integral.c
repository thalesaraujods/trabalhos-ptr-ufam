#include "integral.h"
#include <stdio.h>
#include <math.h>

/* soma de Riemann à esquerda */
double riemann_integral(integrand f, void* ctx, double a, double b, int n) {
    if (!f || n <= 0) {
        fprintf(stderr, "riemann_integral: argumentos invalidos.\n");
        return NAN;
    }
    
    double sgn = 1.0;
    if (b < a) { double tmp=a; a=b; b=tmp; sgn = -1.0; }
    if (a == b) return 0.0;

    double h = (b - a) / n;
    double sum = 0.0;

    for (int i = 0; i < n; ++i) {
        double x = a + i*h;  // ponto à esquerda
        sum += f(x, ctx);
    }

    return sgn * h * sum;
}