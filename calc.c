#include<stdio.h>
int main()
{
    int a,b,sum,diff,div,mul;
    printf("Enter values for a and b");
    scanf("%d %d",&a,&b);
    sum=a+b;
    diff=a-b;
    mul=a*b;
    div=a/b;
    printf("sum=%d\ndiff=%d\nmul=%d\ndiv=%d",sum,diff,mul,div);
}