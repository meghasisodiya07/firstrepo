#include<stdio.h>
void main()
{
    int num,i,sum=0,temp;
    printf("enter a number :");
    scanf("%d",&num);
    temp=num;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num+num)
    {
        printf("%d is perfect number",sum);
    }
    else{
       printf("%d is not perfect number",sum); 
    }
}