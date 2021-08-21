/* 
Problem Statement::Write a program to calculate Net Salary. User has to input Basic Salary and
Output should be:
Enter Basic Salary: 5000 (e.g. 5000)
Allowances:
DA = 70% of Basic Salary
HRA = 7% of Basic Salary
MA = 2% of Basic Salary
TA = 4% of Basic Salary
Deduction:
PF = 12% of Basic Salary
IT = any value (e.g. 500)
------------------------------------------------------------------------------------------
----
Net Salary = Basic Salary + Allowances – Deduction
*/

#include<stdio.h>

int main() {
        float salary, da, hra, ma, ta, pf, it, allowances, deduction, net;
        printf("Please enter the salary:");
        scanf("%f", & salary);

        da = (70 * salary) / 100;
        hra = (7 * salary) / 100;
        ma = (2 * salary) / 100;
        ta = (4 * salary) / 100;
        pf = (12 * salary) / 100;
        it = (10 * salary) / 100;
        allowances = da + hra + ma + ta;
        deduction = pf + it;
        net = salary + allowances - deduction;
        printf("The Net salary is %f\n", net);
        return 0;
}
