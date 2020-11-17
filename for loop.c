#include<stdio.h>
#include<time.h>

void main()
{
    int i,j,k,n,start,end,count1=0,count2=0,count3=0;

    printf("Enter Input Size :");

    scanf("%d",&n);


    start=clock();

    for(i=n/2; i<=n; i++)

    { count1++;

       for(j=1;j<=n;j*=2)

            {  count2++;

             for(k=1;k<=n;k*=2)
             {
               printf(" Md Torikul Islam\n");
               count3++;
             }

         }

      }

    end=clock();

    printf(" 1st Loop Run %d times\n",count1);
    printf(" 2nd Loop Run %d times\n",count2);
    printf(" For N = %d,total Loop Run %d times\n",n,count3);

    printf(" Algorithm Time complexity is (N*(Log2N)^2 --->  %lf second\n",(double)(end-start)/1000);



}


