/*
Author: Atalay Küçükoğlu
Date: 14.02.2018

This program calculates the electrical force 
between two charges with q1, q2 and distance parameters.


*/



#include <stdio.h>   // printf, scanf
#include <stdlib.h>  // EXIT_SUCCESS
#include <math.h>    // pow

int main() {

double q1=0.0, q2=0.0;          //charges
double r = 0.0;                 //distance
const double k = 9*pow(10, 9);  //coulomb's constant 
printf("Enter q1 and q2 in Coulomb: \n");
scanf("%lf %lf", &q1, &q2);
printf("Enter distance between the charges in meters: \n" );
scanf("%lf", &r);

if (r<=0) {

  printf("Distance cannot be equal to 0\n");
};
double force = (k*q1*q2)/ (r*r);
printf("The electrical force between these charges is %lf N", force);


return EXIT_SUCCESS;
}
