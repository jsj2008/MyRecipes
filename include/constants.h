/** @file constants.h */
#include <float.h>

#ifndef _CONST_H_
#define _CONST_H_

/** the largest floating number which can be treated as 0 in calculation */
#define FLOAT_ZERO_LIM (DBL_EPSILON * 10)

/** iteration limit, the maximum steps any iteration alg will execute */
#define ITER_LIM 1000

/** if a function returning double need to return a NAN, use this macro */
#define FLOAT_NAN DBL_MAX

/**
 * @brief the A matrix for RKF method with orders 8 and 7
 */
static const double A78[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2.0/27.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1.0/36.0, 1.0/12.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1.0/24.0, 0, 1.0/8.0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    5.0/12.0, 0, -25.0/16.0, 25.0/16.0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1.0/20.0, 0, 0, 1.0/4.0, 1.0/5.0, 0, 0, 0, 0, 0, 0, 0, 0,
    -25.0/108.0, 0, 0, 125.0/108.0, -65.0/27.0, 125.0/54.0, 0, 0, 0, 0, 0, 0, 0,
    31.0/300.0, 0, 0, 0, 61.0/225.0, -2.0/9.0, 13.0/900.0, 0, 0, 0, 0, 0, 0,
    2.0, 0, 0, -53.0/6.0, 704.0/45.0, -107.0/9.0, 67.0/90.0, 3.0, 0, 0, 0, 0, 0,
    -91.0/108.0, 0, 0, 23.0/108.0, -976.0/135.0, 311.0/54.0, -19.0/60.0, 17.0/6.0, -1.0/12.0, 0, 0, 0, 0,
    2383.0/4100.0, 0, 0, -341.0/164.0, 4496.0/1025.0, -301.0/82.0, 2133.0/4100.0, 45.0/82.0, 45.0/164.0, 18.0/41.0, 0, 0, 0,
    3.0/205.0, 0, 0, 0, 0, -6.0/41.0, -3.0/205.0, -3.0/41.0, 3.0/41.0, 6.0/41.0, 0, 0, 0,
    -1777.0/4100.0, 0, 0, -341.0/164.0, 4496.0/1025.0, -289.0/82.0, 2193.0/4100.0, 51.0/82.0, 33.0/164.0, 12.0/41.0, 0, 1.0, 0
};
/**
 * @brief the B vector for RKF method with orders 8 and 7
 */
static const double B78[] = {
    41.0/840.0, 0, 0, 0, 0, 34.0/105.0, 9.0/35.0, 9.0/35.0, 9.0/280.0, 9.0/280.0, 41.0/840.0, 0, 0
};
/**
 * @brief the Bstar vector for RKF method with orders 8 and 7
 */
static const double Bstar78[] = {
    0, 0, 0, 0, 0, 34.0/105.0, 9.0/35.0, 9.0/35.0, 9.0/280.0, 9.0/280.0, 0, 41.0/840.0, 41.0/840.0
};
/**
 * @brief the C vector for RKF method with orders 8 and 7
 */
static const double C78[] = {
    0, 2.0/27.0, 1.0/9.0, 1.0/6.0, 5.0/12.0, 1.0/2.0, 5.0/6.0, 1.0/6.0, 2.0/3.0, 1.0/3.0, 1.0, 0, 1.0
};

/**
 * @brief the A matrix for RKF method with orders 5 and 4
 */
static const double A45[] =
{
    0, 0, 0, 0, 0, 0,
    1.0/4.0, 0, 0, 0, 0, 0,
    3.0/32.0, 9.0/32.0, 0, 0, 0, 0,
    1932.0/2197.0, -7200.0/2197.0, 7296.0/2197.0, 0, 0, 0,
    439.0/216.0, -8.0, 3680.0/513.0, -845.0/4104.0, 0, 0,
    -8.0/27.0, 2.0, -3544.0/2565.0, 1859.0/4104.0, -11.0/40.0, 0
};
/**
 * @brief the B vector for RKF method with orders 5 and 4
 */
static const double B45[] = {
    25.0/216.0, 0, 1408.0/2565.0, 2197.0/4104.0, -1.0/5.0, 0
};
/**
 * @brief the Bstar vector for RKF method with orders 5 and 4
 */
static const double Bstar45[] = {
    16.0/135.0, 0, 6656.0/12825.0, 28561.0/56430.0, -9.0/50.0, 2.0/55.0
};
/**
 * @brief the C vector for RKF method with orders 5 and 4
 */
static const double C45[] = {
    0, 1.0/4.0, 3.0/8.0, 12.0/13.0, 1, 1.0/2.0
};

#endif
