#include <stdio.h>
#include <conio.h>
long int fibo(int num);
void main()
	{
   int num,check,i,j,count;
   long int fn;
   printf("Enter a number: ");
   check=scanf("%d",&num);           /* check the input to see if it is a positive integer*/
   if ((check==1) && (num > 0))
   	{
      count=0;
      fn=fibo(num);
      for(i=1;i <= fn;i++)           /* this loop counts the number of 5 factors in each number from 1 to fn  */
      	{
         j=i;
         while( j > 0)
         	{                        	 /* the number of 5 factors indicate the number of trailing zeros of fn! */
         	if((j % 5)==0)              /* beacause the number of 2 factors are always a lot more than 5 factors */
         		{                        /* so the number of 5 factors is equal to number of 10 factors of fn! */
            	count++;
               j=j/5;
          		}
            else
            	{
            	break;
            	}
           }
        }
      printf("%d",count);
      }
   else
   	{
      printf("Input Error");         /* print an error message in case of wrong input*/
      }
      getch();
   }

long int fibo(int num)               /* compute fn using a recursive algorithm*/
	{
   if((num==1) || (num==2))          /* f1 and f2 values are 1*/
   	{
   	return 1;
      }
   else
   	{
      return fibo(num-1)+fibo(num-2);
      }
   }