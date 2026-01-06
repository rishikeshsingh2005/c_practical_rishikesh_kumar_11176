#include<stdio.h>
int main(){
    int n;
    printf("Please enter a number: ");
    scanf("%d",&n);
    int m;
    printf("Please enter another number: ");
    scanf("%d",&m);
    if (n>m)
    {
        printf("%d is greater than %d",n,m);
    }
    else
    {
        printf("%d is less than %d",n,m);
    }
    return 0;
    
    
}