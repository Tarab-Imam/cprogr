#include<stdio.h>
int main()
{
    int i;
    int a[5];
    a[0]=2;a[1]=6;a[2]=9;a[3]=4;a[4]=7;a[5]=8;
    int sum=0;
    for (i=0;i<=5;i++){
    sum=sum+a[i];
    }
    printf("sum of elements=%d",sum);
    return 0;

}