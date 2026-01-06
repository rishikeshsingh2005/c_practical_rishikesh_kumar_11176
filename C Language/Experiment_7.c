#include<stdio.h>
int main(){
    int n;
    printf("please enter a number: ");
    scanf("%d",&n);
    int mul=22/7;
    int answer;
    answer=mul*n*n;
    printf("Area of circle of %d is = %d ",n,answer);
    return 0;
}