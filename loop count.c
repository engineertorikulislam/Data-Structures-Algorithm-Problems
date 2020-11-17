#include<stdio.h>
#include<time.h>

void main()
{
    int i,j,n,count1=0,start,end;

    printf("Enter Input Size :");

    scanf("%d",&n);

    start=clock();

    for(j=1;j<=n;j*=2)
    {
         printf(" Md Torikul Islam\n"); // Big O (logN)
         count1++;
    }

     end=clock();

     printf("Loop Run %d times\n",count1);

     printf("Algorithm Time complexity is Bog O of (LogN) --->  %lf second\n",(double)(end-start)/1000);

}



