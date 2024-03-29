/* 
Problem Statement::Any year is input through the keyboard. Write a program to determine
whether the year is a leap year or not. Use the logical operators && and ||.
*/

#include<stdio.h>

int main() {
  int year;
  printf("Enter the year:\n");
  scanf("%d", & year);

  if ((year % 4 == 0 || year % 400 == 0) && (year % 100 != 0)) {
    printf("\n %d is a leap year", year);
  } 
  else {
    printf("\n %d is not a leap year", year);
  }
  return 0;
}
