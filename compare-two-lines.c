/*
This program checks if two lines in cartesian
coordinates system are parallel, perpendicular or just intersect.
Date: 05.03.2017
Author: Atalay Kucukoglu

*/


#include <stdio.h>    // printf, scanf
#include <stdlib.h>   // EXIT_SUCCESS

int main() {

  double A = 0, B = 0, C = 0, D = 0, E = 0, F = 0;   //coefficients for the lines

  printf("Enter the coefficients for line 1: \n(A,B,C of Ax + By + C = 0)\n");   
  scanf("%lf%lf%lf", &A,&B,&C);    //read the coefficients for line 1
  printf("Enter the coefficients for line 2: \n(D,E,F of Dx + Ey + F = 0)\n");
  scanf("%lf%lf%lf", &D,&E,&F);    //read the coefficients for line 2
  
  double m1 = -A/B;   //slope of line 1
  double m2 = -D/E;   //slope of line 2

  printf("m1= %lf, m2= %lf\n", m1, m2);

  if (m1 == m2) {   //checks if the lines are parallel to each other
    printf("These lines are parallel to each other.\n");
  } else {
    if (m1*m2 == -1) {   //checks if the lines are perpendicular to each other
    printf("These lines intersect and are perpendicular to each other.\n");
    } else {
    printf("These lines intersect.\n");
    }
  }
  printf("Terminated Succesfully");
  return EXIT_SUCCESS;   //terminated

}
