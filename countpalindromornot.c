//write a program to reverse palindrom number or not palindrome number.
#include<stdio.h.>
void main()
{
    int a[5]={121,676,348,83,9},i,rem,rev,num,p=0,n=0;
    for(i=0;i<5;i++)
    {
      num=a[i];
      rev=0;
      while(num>0)
      {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
      }
    
    if(a[i]==rev)
    {
        p++;
    }
    else{
     n++;
    }
    }
    printf("no are palindrom :%d\n",p);
    printf("no are not palindrom :%d",n);
}