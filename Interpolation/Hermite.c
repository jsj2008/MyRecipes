/** @file Hermite.c */
#include <math.h>
#include "NR.h"
#include "NRprivate.h"
/**
 * @brief Hermite polynomial Interpolation
 * @param N number of Interpolation intervals,
 * @param a[N] the Interpolation points,
 * @param x variable
 * @param f[N] function,
 * @param df[N] derivative of f with respect to variable x,
 * @return approximate value using Hermite polynomial
 */
double Hermite(int N, double *a, double *f, double *df, double x)
{
    double *A = newArray1d(N);
    double *B = newArray1d(N);
    double *L = LagrangePoly(a, x, N);
    double H = 0;

    for (int i = 0; i < N; i++)
    {
        A[i] = 0;
        B[i] = 0;
        B[i] = (x - a[i]) * L[i] * L[i];
        double temp = 0;
        for (int j = 0; j < N; j++)
        {
            if (j != i)
            {
                temp += 1 / (a[i] - a[j]);
            }
        }
        A[i] = (1 - 2 * (x - a[i]) * temp) * L[i] * L[i];

        H += f[i] * A[i] + df[i] * B[i];
    }
    delArray1d(A);
    delArray1d(B);
    delArray1d(L);
    return H;
}
