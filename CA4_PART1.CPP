#include <stdio.h>
#include <conio.h>
long int fibo(int num);
void main()
	{
   int num,check;
   printf("Enter a number: ");
   check=scanf("%d",&num);           /*check the input to see if it is a positive integer*/
   if ((check==1) && (num > 0))
   	{
      printf("%d",fibo(num));
      }
   else
   	{
      printf("Input Error");         /*print an error message in case of wrong input*/
      }
      getch();
   }

long int fibo(int num)               /*compute fn using a recursive algorithm*/
	{
   if((num==1) || (num==2))          /*f1 and f2 values are 1*/
   	{
   	return 1;
      }
   else
   	{
      return fibo(num-1)+fibo(num-2);
      }
   }