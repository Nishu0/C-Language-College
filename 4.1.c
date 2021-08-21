/* 
Problem Statement::Write a program to convert the decimal number into octal and hexadecimal
format.Hint: %o and %x
*/

#include<stdio.h>

int main() {
  int n;
  printf("Enter a number(Decimal): ");
  scanf("%d", & n);
  printf("Octal equivalent of %d: %o\n", n, n);
  printf("Hexadecimal equivalent of %dn: %x\n", n, n);
  return 0;

}
