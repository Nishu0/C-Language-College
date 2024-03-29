/* 
Problem Statement::If the length of the sides of a triangle are denoted by a, b and c, then the area
of triangle is given by: 
s=(a+b+c)/2
A=SqRt(s(s-a)(s-b)(s-c)
*/

#include<stdio.h>
#include<math.h>
int area(int a, int b, int c);
int main()
{
    int a, b, c;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    area(a,b,c);
    return 0;
}
int area(int a, int b, int c)
{
    float S,ar;
    S = (a+b+c)/2.0;
    ar = sqrt(S*(S-a)*(S-b)*(S-c));
    printf("Area of Triangle: %f",ar);
}
