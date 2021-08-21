/* 
Problem Statement::Write a C program to check if the entered number is prime or not by using
types of user defined functions
(i) No arguments passed and no return value
(ii) No arguments passed but a return value
(iii) Argument passed but no return value
(iv) Argument passed and a return value
*/

#include <stdio.h>
void checkPrimeNumber();
int getInteger();
void checkPrimeAndDisplay(int n);
int checkPrimeNo(int n);

int main()
{
 	checkPrimeNumber();
 	return 0;
}
int getInteger()
{
 	int n;
 	printf("Enter a positive integer: ");
 	scanf("%d",&n);
 	return n;
}
void checkPrimeAndDisplay(int n)
	{
 	int i, flag = 0;
 	for(i=2; i <= n/2; ++i)
 		{
			 if(n%i == 0)
			 {
			 	flag = 1;
 				break;
 			}
 		}
 	if(flag == 1)
 	{
 		printf("%d is not a prime number.",n);
 	}
 	else
 	{
	  	printf("%d is a prime number.", n);
	}
}
int checkPrimeNo(int n)
{
 	int i;
 	for(i=2; i <= n/2; ++i)
 	{
 		if(n%i == 0)
 		return 1;
 	}
 	return 0;
}
void checkPrimeNumber()
{
 	int n, i, flag = 0;
 	printf("Enter a positive integer: ");
 	scanf("%d",&n);
 	for(i=2; i <= n/2; ++i)
 	{
 		if(n%i == 0)
 			{
 				flag = 1;
 			}
 	}
 	if (flag == 1)
 	{
 		printf("%d is not a prime number.", n);
	}
 	else
 	{
 		printf("%d is a prime number.", n);
	}
}
