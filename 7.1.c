/* 
Problem Statement::Twenty five numbers are entered from the keyboard into an array. Write a
program to find out how many of them are positive, negative, how many are even and odd.
*/

#include<stdio.h>
int main()
{
      int a[25],odd=0,even=0,neg=0,pos=0,i;
      printf("\nEnter 25 Elements : ");
      for(i=0;i<25;i++)
      {
            scanf("%d",&a[i]);
      }
      for(i=0;i<25;i++)
      {
            if(a[i]>=0)
            {
                  pos++;
            }
            else
            {
                  neg++;
            }
            if(a[i]%2==0)
            {
                  even++;
            }
            else
            {
                  odd++;
            }
      }
      printf("\nPositive : %d",pos);
      printf("\nNegative : %d",neg);
      printf("\nEven     : %d",even);
      printf("\nOdd      : %d",odd);
      return 0;
}
