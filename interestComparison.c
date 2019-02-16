/*
 * File: piApproximater
 * Author: Andres Ruiz
 * Date: 2019/02/116
 *
 * Using the simple ,compound, and the exponential formulas
 * to calculate interest based off principle, percent percentRate
 * and years.
 */
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main(int argc, char **argv) {

  double principle;
  double percentRate;
  double years;
  double simple;
  double compound;
  double contCompound;

  printf("Enter value for principle: ");
  scanf("%lf", &principle);
  printf("Enter value for percent rate: ");
  scanf("%lf", &percentRate);
  printf("Enter time for interest to be calculated over in years: ");
  scanf("%lf", &years);

  simple = (principle * percentRate * years) + principle;
  compound = principle * pow ((1 + percentRate), years);
  contCompound = principle * pow((M_E), percentRate * years);

  printf("Simple Interest: %lf\n", simple);
  printf("Compound Interest: %lf\n", compound);
  printf("Continuously Compounded Interest: %lf\n", contCompound);
  return 0;
}
