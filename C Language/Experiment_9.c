#include<stdio.h>
int main(){
    int a;
    printf("please enter a first number: ");
    scanf("%d",&a);
    int b;
    printf("please enter a second number: ");
    scanf("%d",&b);
    int c;
    printf("please enter a third number: ");
    scanf("%d",&c);
    if (c>a && c>b)
    {
        printf("%d is greater\n",c);
    }else if (a>b && a>c)
    {
        printf("%d is greater\n ",a);
    }
 else if (b>a && b>c)
    {
        printf("%d is greater",b);
    }
    
    
    return 0;
}