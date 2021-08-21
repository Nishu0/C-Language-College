/*
Problem Statement::A cashier has currency notes of denominations 10,50 and 100. If the amount
to be withdrawn is input through the keyboard in hundreds, find the total
number of currency notes of each denomination the cashier will have to give
to the withdrawer.
*/

#include<stdio.h>

int main() {
        int amount;
        printf("Please Enter amount:");
        scanf("%d", & amount);

        printf("Required no of notes of 100Rs :: %d", amount / 100);
        printf("\nRequired no of notes of 50Rs :: %d", (amount % 100) / 50);
        printf("\nRequired no of notes of 10Rs  :: %d", ((amount % 100) % 50) / 10);
        printf("\nRemaing amount is %d", ((amount % 100) % 50) % 10);
        return 0;
}
