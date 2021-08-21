/* 
Problem Statement::The policy followed by a company to process customer orders is given by
the following rules:
a) If a customer order is less than or equal to that in stock and ‘has
credit’ is OK, supply ‘has requirements’.
b) If ‘has credit’ is not OK do not supply. Send him intimation.
c) If ‘has credit’ is OK but the item in stock is less than ‘has ordered’,
supply what is in stock and Intimate him that the balance will be refunded.
Write a C program to implement the company policy.
*/

#include<stdio.h>

int main() {
  int stock = 100, order;
  char credit;

  printf("Enter the customer order:: ");
  scanf("%d", & order);
  printf("Is his credit is ok? (Press y/n)\n");
  credit = getch();

  if (order <= stock && credit == 'y' || credit == 'Y')
    printf("Sir,\n\t We supplied your requirement\n\t\t Quantity: %d", order);

  else if (order > stock && credit == 'y' || credit == 'Y')
    printf("Sir,\n\t We supplied %d products and balance will be shipped later.", stock);

  else
    printf("Sir,\n\t Please first clear your credit, until we can't supply you any more.");
  return 0;
}
