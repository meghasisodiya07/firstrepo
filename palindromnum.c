#include<stdio.h>
void main()
{
    int num,i,rev=0,temp,rem;
    printf("enter a number :");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        rem=num%10;
        for(i=1;i<=rem;i++)
       { rev=rev*10+rem;
        num=num/10;
       }
    }
    if(rev==temp)
    {
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
}