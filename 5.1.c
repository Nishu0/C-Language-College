/* 
Problem Statement:: If the cost price and selling price of an item is input through the keyboard,
write a program to determine whether the seller has made profit or incurred
loss. Also determine how much profit he made or loss he incurred. 
*/

#include<stdio.h>

int main() {
  float cost_price, selling_price, profit, loss;

  printf("Enter the cost price of an item: ");
  scanf("%f", & cost_price);

  printf("Enter the selling price of an item: ");
  scanf("%f", & selling_price);

  if (selling_price > cost_price) {
    profit = selling_price - cost_price;
    printf("We earn %f profit.", profit);
  } 
  else if (selling_price < cost_price) {
    loss = cost_price - selling_price;
    printf("\nWe incurred %f loss.", loss);
  } 
  else {
    printf("\nWe don't get any loss and profit on selling item");
  }
  return 0;
}
