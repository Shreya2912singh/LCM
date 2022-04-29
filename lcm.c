#include<stdio.h>
int LCM(int, int);
int main()
{
    int a,b,res;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number");
    scanf("%d",&b);
    res = LCM(a,b);
    printf("%d is the lcm of given number",res);
    return 0;
}
int LCM(int a , int b)
{
    int m = 0;
    m = m + b;
    if(m % a == 0 && m % b == 0)
    {
       return m;
    }
    return LCM(a , b);
}
