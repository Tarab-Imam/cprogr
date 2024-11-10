#include<stdio.h>
int main()
{
    float i;
    float sum=0;
    for (i=1;i<=3;i++){
    sum=sum+(1/i);
    }
    printf("%f",sum);
    return 0;
}    
