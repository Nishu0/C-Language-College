/* 
Problem Statement::Write a C Program to Print multiplication table of number entered by user.
*/

#include <stdio.h>

int main() {
  int n, i;
  printf("Enter an integer: ");
  scanf("%d", & n);
  for (i = 1; i <= 10; ++i) {
    printf("%d x %d = %d \n", n, i, n * i);
  }
  return 0;
}
