/* 
Problem Statement::Write a program for creating two arrays of different size and merge both
arrays into one by sorting those arrays in ascending order. [Merge by sorting]
*/

#include<stdio.h>
int main()
{
	int arr1[6],arr2[4],arr3[10],i,j,tmp;

	printf("\nEnter values for array 1\n");
	for(i=0;i<6;i++)
	{
		printf("Enter any number:: ");
		scanf("%d",&arr1[i]);
	}
	printf("Enter value for array 2\n");
	for(i=0;i<4;i++)
	{
		printf("Enter any number:: " );
		scanf("%d",&arr2[i]);
	}

	printf("Value in array 1:: ");
	for (int i = 0; i < 6; i++)
	{
		printf("  %d",arr1[i]);
	}
	printf("\nValue in array 2:: ");
	for (int i = 0; i < 4; i++)
	{
		printf("  %d",arr2[i]);
	}
	for (i=0;i<10;i++)
	{
		if(i<6)
			arr3[i]=arr1[i];
		else
			arr3[i]=arr2[i-6];
	}
	printf("\nValue in array 3:: ");
	for (int i = 0; i < 10; i++)
	{
		printf("  %d",arr3[i]);
	}

	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr3[j]<arr3[i])
			{
				tmp=arr3[i];
				arr3[i]=arr3[j];
				arr3[j]=tmp;
			}
		}
	}
	printf("\nElements of sorted ascending order:: ");
	for(i=0;i<10;i++)
	{
		printf("%d ",arr3[i]);
	}
	return 0;
	}
