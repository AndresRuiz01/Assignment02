/*
 * File: multiTable.c
 * Author: Andres Ruiz
 * Date: 2019/02/116
 *
 * A program that outputs a multiplication table
 * for n x n
 */
#include<stdlib.h>
#include<stdio.h>

int main(int argc, char **argv) {

  int number;

  printf("Enter a number: ");
  scanf("%d", &number);

  printf("The multiplication table of 5 is:\n");

  for(int i = 1; i <= number; i++) {
    for(int j = 1; j <= number; j++) {
      printf("%d ", i * j);
    }
      printf("\n");
  }

  return 0;
}
