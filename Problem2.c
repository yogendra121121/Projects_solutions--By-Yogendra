#include <stdio.h>
#include <math.h>

#include "Library.h"
#include "Library.c"

void main()
{
     double lati1 = 23.259933, lati2 = 12.9716, long1 = 77.412613, long2 = 77.5946;
     double distance;
     printf("latitude and longitude value of Bhopal is: \nlatitude = %lf \nlongitude = %lf\n\n",lati1,long1);
    
     printf("latitude and longitude value of Banglore is: \nlatitude = %lf \nlongitude = %lf",lati2,long2);

     distance = find_distance(lati1, lati2, long1, long2);

     printf("\n\nDistance between Saurabh sir and Prateek sir : %lf Km\n", distance);
}
