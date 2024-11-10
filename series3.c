#include<stdio.h>
int main()
{
    int n,digit,original;
    int sum=0;
    original=n;

    
    printf("Enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        digit=n%10;
        
        n=n/10;
        sum=sum+(digit*digit*digit);
    }
    printf("reverse=%d",sum);
    if (original==sum)
    printf("armstorm");
    return 0;
}