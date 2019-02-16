/*
 * File: piApproximater
 * Author: Andres Ruiz
 * Date: 2019/02/116
 *
 * A program that outputs an estimation for pi
 * based off the number of terms in the taylor polynomial
 */
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char **argv) {

  int n;
  int count = 0;
  double denominator = 1.0;
  double sum, piApproximation = 0;
  int posNeg = 1;

  printf("Enter the values of n: ");
  scanf("%d", &n);

  printf("\n");

  if (n <= 0 ) {
    printf("n should be a positive number greater than 0.\n");
    return 0;
  }
    while(count < n) {
      sum = sum + (1.0/denominator);
      count++;
      posNeg = posNeg * -1;
      denominator = (fabs(denominator) + 2) * posNeg;
  }

  piApproximation = 4 * sum;
  printf("The approximation of pi is: %0.4f\n", piApproximation);
  return 0;
}
