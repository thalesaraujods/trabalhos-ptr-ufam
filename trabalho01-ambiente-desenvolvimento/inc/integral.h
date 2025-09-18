#ifndef INTEGRAL_H
#define INTEGRAL_H

typedef double (*integrand)(double x, void* ctx);

double riemann_integral(integrand f, void* ctx, double a, double b, int n);

#endif