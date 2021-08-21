/* 
Problem Statement::Two numbers are entered through the keyboard. Write a program to find the
value of one number raised to the power of another. (Use While loop) 
*/

#include<stdio.h>

int main() {
  int a, b;
  int p = 1;

  printf("Enter two positive numbers:: ");
  scanf("%d", & a);
  scanf("%d", & b);

  printf("%d power/raise to %d= ", a, b);
  while (b > 0) {
    p = p * a;
    --b;
  }
  printf("%d", p);
  return 0;
}
