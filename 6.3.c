/* 
Problem Statement::Write a menu driven program which has following options:
1. Prime or not
2. Perfect number or not
3. Factorial of a number
4. Exit
Use do...while statement so that the menu is displayed at least once. Also
use Switch statement.
*/

#include<stdio.h>


int main()
{

    int choice, num, i,sum;
    unsigned long int fact;

    while(1)
    {
        printf("1. Prime \n");
        printf("2. Perfect Number\n");
        printf("3. Factorial\\Even\n");
        printf("4. Exit\n\n\n");
        printf("Enter your choice :  ");
        scanf("%d",&choice);

        switch(choice)
        {

        	case 1:
                printf("Enter number:: \n");
                scanf("%d", &num);
                if(num == 1)
                printf("\n1 is neither prime nor composite\n\n");
                for(i = 2; i < num; i++)
                {
                    if(num%i == 0)
                    {
                        printf("\n%d is not a prime number\n\n", num);
                        break;
                    }

                }
                /*
                    Not divisible by any number other
                    than 1 and itself
                */
                if(i == num)
                {
                    printf("\n\n%d is a Prime number\n\n", num);
                    break;
                }
            case 2:
             printf("\n Please Enter any number \n") ;
 			 scanf("%d", &num) ;

 			 for(i = 1 ; i < num ; i++)
  				{
   					if(num % i == 0)
     				sum = sum + i ;
  				}

 				if (sum == num)
 				{
 					printf("\n %d is a Perfect Number\n", num) ;
 				}

 				else
    			printf("\n%d is not the Perfect Number\n", num) ;
    			break;



            case 3:
                printf("Enter number:: \n");
                scanf("%d", &num);
                fact = 1;
                for(i = 1; i <= num; i++)
                {
                    fact = fact*i;
                }
                printf("\n\nFactorial value of %d is = %lu\n\n\n",num,fact);
                break;

            case 4:
                exit(0);
        }
    }
    return 0;
}
