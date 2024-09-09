#include<stdio.h>
void main()
{
    int num,i;
    printf("enter a number");
    scanf("%d",&num);
    if(num==0 || num==1)
    {
        printf("number is not prime");
    }
    else{
        for(i=2;i<=num;i++)
        {
            if(num%i==0)
            {
               // f=0;
                break;
            }
        }
        if(num==i)
        {
            printf("prime number");
        }
        else{
            printf("not prime");
        }
    }
}
