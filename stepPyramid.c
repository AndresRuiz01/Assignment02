/*
 * File: stepPyramid.c
 * Author: Andres Ruiz
 * Date: 2019/02/116
 *
 *  A program that will output a step pyramid of the
 * given number of layers.
 *
 */
#include<stdlib.h>
#include<stdio.h>

int main(int argc, char **argv) {

  int layers;

  printf("Enter the number of layers: ");
  scanf("%d", &layers);

  if (layers < 1) {
    printf("The number of steps for the pyramid must be at least 1.");
    return 0;
  }

  printf("*\n");

  for(int i = 3; i <= layers * 3; i = i + 3) {
    for(int j = i; j >= 1; j-- ) {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}
