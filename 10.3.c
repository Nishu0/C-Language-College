/* 
Problem Statement::Write a C program for nested structure to display employee details such as,
Age, Name, Address, Salary.
*/

#include<stdio.h>

       struct Address
       {
              char HouseNo[25];
              char City[25];
              char PinCode[25];
              char Society[25];
       };

       struct Employee
       {
           char Name[25];
           float Salary;
           struct Address Add;
       };

       int main()
       {
              
              struct Employee E;

			  printf("\n\tEnter Employee Name : ");
              scanf("%s",&E.Name);

              printf("\n\tEnter Employee Salary : ");
              scanf("%f",&E.Salary);

              printf("\n\tEnter Employee House No : ");
              scanf("%s",&E.Add.HouseNo);

              printf("\n\tEnter Employee Society/Bunglows : ");
              scanf("%s",&E.Add.Society);

              printf("\n\tEnter Employee City : ");
              scanf("%s",&E.Add.City);

              printf("\n\tEnter Employee Pincode : ");
              scanf("%s",&E.Add.PinCode);

              printf("\nDetails of Employees");
              printf("\n\tEmployee Name : %s",E.Name);
              printf("\n\tEmployee Salary : %f",E.Salary);
              printf("\n\tEmployee House No : %s",E.Add.HouseNo);
              printf("\n\tEmployee House No : %s",E.Add.Society);
              printf("\n\tEmployee City : %s",E.Add.City);
              printf("\n\tEmployee House No : %s",E.Add.PinCode);
              return 0;

       }
