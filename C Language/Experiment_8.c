#include<stdio.h>
int main(){
    int n;
    printf("please enter a number: ");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("Even Number");
    }
    else
    {
        printf("odd Number");
    }
    return 0;
    
}