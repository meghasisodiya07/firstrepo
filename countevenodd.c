#include<stdio.h>
void main()
{
    int a[5]={23,43,24,12,22},i,ec=0,oc=0;
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
        ec++;
        }
       else
        {
         oc++; 
        }
    }
        printf("even :%d\n",ec);
        printf("odd :%d\n",oc);  
}