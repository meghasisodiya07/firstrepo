#include<stdio.h>
void main()
{
    int num,i,sum=0,temp,count=0,rem,ans;
    printf("enter a number :");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        count++;
        num=num/10;
    }
    num=temp;
    while(num>0)
    {
        rem=num%10;
        ans=1;
        for(i=1;i<=count;i++)
        {
          ans=ans*rem;
        }
        sum=sum+ans;
        num=num/10;
    }
    if(sum==temp)
    {
        printf("armstrong");
    }
    else{
        printf("not armstrong");
    }
}