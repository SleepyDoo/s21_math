#include "s21_math.h"

long double s21_tan(double x) {
    if ((is_inf(x)) || (is_nan(x))) return S21_NAN;
    x = s21_fmod(x, 2 * S21_PI);
    return s21_sin(x) / s21_cos(x);
}
