#include<stdio.h>
void main()
//print day name according to number.
/*{
int num;
printf("Enter a number :");
scanf("%d",&num);
if(num==1)
  { 
    printf("day is monday");
  }
  else if(num==2)
  {
  	printf("day is tuesday");
  }
  else if(num==3)
  {
  	printf("day is wednesday");
  }
  else if(num==4)
  {
  	printf("day is thursday");
  }
  else if(num==5)
  {
  	printf("day is friday");
  }
  else if(num==6)
  {
  	printf("day is saturday");
  }
  else if(num==7)
  {
  	printf("day is sunday");
  }
  else
  {
  	printf("please enter 1 to 7 num");
  }
}*/
//wap to check given no. is less than 100 or greater than 100 or equal to 100.
/*{
 int num;
 printf("Enter a number :");
 scanf("%d",&num);
 if(num>100)
 {
 	printf("number is greater than 100");
 }
 else if(num==100)
 {
 	printf("number is equal to 100");
 }
 else
 {
 	printf("number is less than 100");
 }
}
//wap to print grade of student according to percentage criteria given in question.
{
	int num;
	printf("Enter a number");
	scanf("%d",&num);
	if(num==75)
	{
		printf("gread of student A",num);
	}
	else if(num>60 && num<75)
	{
		printf("gread of student B");
	}
	else if(num>50 && num<60)
	{
		printf("gread of student C");
	}
	else if(num>40 && num<50)
	{
		printf("gread of student D");
	}
	else
	{
		printf("Enter num 40 to 75 ");
	}
}	int num;
	printf("Enter a number");
	scanf("%d",&num);
	if(num==75)
	{
		printf("gread of student A",num);
	}
	else if(num>60 && num<75)
	{
		printf("gread of student B");
	}
	else if(num>50 && num<60)
	{
		printf("gread of student C");
	}
	else if(num>40 && num<50)
	{
		printf("gread of student D");
	}
	else
	{
		printf("Enter num 40 to 75 ");
	}
//print month name according to number.
{
 int num;
 printf("Enter a number");
 scanf("%d",&num);
 if(num==1)
 {
 	printf("month is january");
 }
 else if(num==2)
 {
 	printf("month is february");
 }
 else if(num==3)
 {
 	printf("month is march");
 }
 else if(num==4)
 {
 	printf("month is aprail");
 }
 else if(num==5)
 {
 	printf("month is may");
 }
 else if(num==6)
 {
 	printf("month is june");
 }
 else if(num==7)
 {
 	printf("month is july");
 }
 else if(num==8)
 {
 	printf("month is august");
 }
 else if(num==9)
 {
 	printf("month is september");
 }
 else if(num==10)
 {
 	printf("month is october");
 }
 else if(num==11)
 {
 	printf("month is november");
 }
 else if(num==12)
 {
 	printf("month is december");
 }
 else
 {
 	printf("enter 1 to 12 number");
 }
}
//print number of words according to num.
{
	int num;
	printf("Enter a num: ");
	scanf("%d",&num);
	if(num==1)
	{
		printf("number word is one");
	}
	else if (num==2)
	{
 	printf("number word is two");
 }
 else if(num==3)
 {
 	printf("number word is three");
 }
 else if(num==4)
 {
 	printf("number word is fourth");
 }
 else if(num==5)
 {
 	printf("number word is five");
 }
 else if(num==6)
 {
 	printf("number word is six");
 }
 else if(num==7)
 {
 	printf("number word is seven");
 }
 else if(num==8)
 {
 	printf("number word is eight");
 }
 else if(num==9)
 {
 	printf("number word is nine");
 }
 else if(num==10)
 {
 	printf("number word is ten");
 }
 else
 {
 	printf("enter num 1 to 10");
 }
}
//wap to accept roll no and marks of 3 subject of a student,calculate total of 3 subject and average.
{
   	int rollno,s1,s2,s3,s4,s5,total;
   	float per;
	printf("Enter a rollnumber : \n");
	scanf("%d",&rollno);
	printf("enter 5 subject marks :\n");
	scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
	if(s1>40 && s2>40 && s3>40 && s4>40 && s5>40)
	{
	total=s1+s2+s3+s4+s5;
	per=(total/500)*100;
    if(per>=75)
	{
		printf("gread A = %f",per);
	}
	else if(per>=60 && per<75)
	{
		printf("grade B =%f",per);
	}
	else if(per>=50 && per<60)
	{
		printf("gread C =%f",per);
	}
	else if(per>=40 && per<50)
	{
		printf("gread D =%f",per);
	}
	else
	{
		printf("above 40 marks ");
	}
}
else
{
	printf("student fail in exam");
}
}
// wap check given character is alphabet,digit and special symbol.
{
char ch;
printf("enter character : ");
scanf("%c",&ch);
if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
{
 printf("character is alphabate");	
}
else if(ch>='0' && ch<='9')
{
	printf("character is digit");
}
else
{
	printf("character is special symbol");
}
}
//write a program to read an amount (intiger value)and break the amount into the smallest possible number of bank notes 500,200,100,50,20,10,5,2,1. 
{
    int num,note_500,note_200,note_100,note_50,note_20,note_10,note_5,note_2,note_1,notes;
    printf("enter a number");
    scanf("%d",&num);
    if(num==1)
    {
    	printf("enter notes :");
    	scanf("%d",&notes);
    	note_500=notes/500;
    	notes=notes%500;
    	note_50=notes/50;
    	notes=notes%50;
    	note_10=notes/10;
    	notes=notes%10;
    	note_1=notes/1;
    	printf("500 notes =%d\n",note_500);
    	printf("50 notes =%d\n",note_50);
    	printf("10 notes =%d\n",note_10);
    	printf("1 notes =%d\n",note_1);
	}
    else if(num==2)
      {
    	printf("enter notes :");
    	scanf("%d",&notes);
    	note_200=notes/200;
    	notes=notes%200;
    	note_100=notes/100;
    	notes=notes%100;
    	note_20=notes/20;
    	notes=notes%20;
    	note_5=notes/5;
    	note_2=notes/2;
    	notes=notes%2;
    	printf("200 notes =%d\n",note_200);
    	printf("100 notes =%d\n",note_100);
    	printf("20 notes =%d\n",note_20);
    	printf("5 notes =%d\n",note_5);
    	printf("2 notes =%d\n",note_2);
	}
}
// five individual digit revers program.
{
 int num,a,b,c,d,e,rev;
 printf("enter five digit number :");
 scanf("%d",&num);
 a=num/10000;
 b=(num/1000)%10;
 c=(num/100)%10;
 d=(num/10)%10;
 e=num%10;
 rev=e*10000+d*1000+c*100+b*10+a;
 printf("reverse number is =%d",rev);
}
//leap year or not leap year.
{
 int year;
 printf("enter year");
 scanf("%d",&year);
 if(year%400==0 || (year%4==0 && year%100!=0))
 {
 	printf("leap year %d",year);
 }
 else
 {
 	printf("not leap year %d",year);
 }
}*/

