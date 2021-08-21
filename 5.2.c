/* 
Problem Statement::If the ages of Ram, Shyam and Ajay are input through the keyboard, write a
program to determine the youngest of the three. (Hint: Use Nested Switch
Statement)
*/

#include<stdio.h>
int main()
{
	int r,s,a;
	int i=1;
	printf("Enter the age of Ram:: ");
	scanf("%d",&r);
	printf("Enter the name of Shyam:: ");
	scanf("%d",&s);
	printf("Enter the name of Ajay:: ");
	scanf("%d",&a);
	switch(i)
	{
		case 1:
		if (r <= s && r <= a)
		{
			printf("Ram is yongest");
			i=2;
		}
		switch(i)
		{
			case 1:
			if(s <= a && s <= r )
			{
				printf("Shyam is youngest");
				i=2;
			}
			switch(i)
			{
				case 1:
				if(a <= s && a <=r )
				{
					printf("Ajay is the youngest\n");
				}
			}
		}
	}
	return 0;
}
