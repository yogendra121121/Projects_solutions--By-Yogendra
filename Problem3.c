#include <stdio.h>
#include <math.h>

#include "Library.h"
#include "Library.c"

void main()
{
     double area_under_A;
     double x1 = 20.077, x2 = 26.526, x3 = 23.674, y1 = 11.598, y2 = 90.138, y3 = 32.579;

     printf("1st co-ordinates of vertices of  'A' shape character is:- \nx1 = %lf \ny1 = %lf\n", x1, y1);

     printf("\n2nd co-ordinates of vertices of  'A' shape character is:- \nx2 = %lf \ny2 = %lf\n", x2, y2);

     printf("\n3rd co-ordinates of vertices of  'A' shape character is:- \nx3 = %lf \ny3 = %lf\n", x3, y3);


     area_under_A = find_area(x1, x2, x3, y1, y2, y3);
     printf("\nArea to be colour black : %.3f sq.unit\n", area_under_A);
}
