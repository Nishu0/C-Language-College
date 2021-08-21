/* 
Problem Statement::Write a program that takes a set of names of individuals and abbreviates the
first, middle and other names except the last name by their first letter.
*/

#include <stdio.h>
int main()
{
 	char fname[20], mname[20], lname[20];
 	printf("Enter first name:: ");
 	scanf("%s", fname);
 	
 	printf("Enter middle name:: ");
 	scanf("%s", mname);
 	
 	printf("Enter last name:: ");
 	scanf("%s", lname);
 	
	printf("Abbreviated name:: ");
 	printf("%s %s %c.\n", fname, mname, lname[0]);
 	return 0;
}
