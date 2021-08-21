/* 
Problem Statement::Take a user input for a string and calculate the number of alphabets, digits
and special characters from the given input.
*/

#include <stdio.h>
#define MAX_SIZE 100


int main()
{
    char str[MAX_SIZE];
    int characters, digits, specha, i;

    characters = digits = specha = i = 0;



    printf("Enter any string :: ");
    gets(str);


    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            characters++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digits++;
        }
        else
        {
            specha++;
        }

        i++;
    }

    printf("Characters = %d\n", characters);
    printf("Digits = %d\n", digits);
    printf("Special Characters = %d", specha);

    return 0;
}
