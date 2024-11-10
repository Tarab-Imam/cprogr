#include<stdio.h>
int main()
{
    int i;
    int n=0;
    int sum=0;
    for (i=1;i<=3;i++){
    n=n*10+1;
    sum=sum+n;
    }
    printf("%d",sum);    
    return 0;


}