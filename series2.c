#include<stdio.h>
int main()
{
    float i;
    float sum=0;
    for (i=1;i<=3;i++){
    sum=sum+(1/i);
    }
    printf("%.2lf",sum);
    return 0;
}    
