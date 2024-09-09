#include<stdio.h>
void main()
{
    int num,rem,temp,sum=0;
    printf("enter a number");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
      rem=num%10;
      sum=sum+rem*rem*rem;
      num=num/10;
    }
    if(temp==sum)
    {
        printf("number is armstrong");
    }
    else{
        printf("number is not armstrong");
    }
}