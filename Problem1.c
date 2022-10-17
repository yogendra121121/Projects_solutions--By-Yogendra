#include <stdio.h>
#include <math.h>

#include "Library.h"
#include "Library.c"

void main()
{
    double a1 = 5 , b1 = 1, a2 = 2, b2 = 3;

    double angle_at_chowk;

    angle_at_chowk = find_angle(a1, b1, a2, b2);

    // one degree = 57.296
    //  here tan() function return angle in radian so convert into degree multiply it to 57.296
    printf("Angle at which these roads meets at 123 Chowk: \nIN degree : %.3f\nIn radian : %.3f\n", angle_at_chowk * 57.296, angle_at_chowk);
}
