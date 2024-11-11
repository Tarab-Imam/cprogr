#include<stdio.h>
int main()
{
    int i,j,n,m,total,roll_number,marks;
    printf("enter number of students and subjects\n");
    scanf("%d %d",&n,&m);
    for (i=1;i<=n;i++)
    {
    total=0;

    printf("roll number");
    scanf("%d",&roll_number);
    
    
    for (j=1;j<=m;j++)
    {
    printf("enter marks");
    scanf("%d",&marks);
    total=total+marks;
    
    }
    printf("total marks=%d",total);
    
    
  
}
return 0;

}