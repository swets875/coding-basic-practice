#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks secured out of 100");
    scanf("%d",&marks);
    if(marks>=90&&marks<=100)
    {
        printf("Grade- A+");
    }
    else if(marks>75)
    {
        printf("Grade- A");
    }
    else if(marks>60)
    {
        printf("Grade- B");
    }
    else if(marks>=40)
    {
        printf("Grade- C");
    }
    else
    {
        printf("Grade- D(Fail)");
    }
}