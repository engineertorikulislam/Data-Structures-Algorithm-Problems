#include<stdio.h>
#include<time.h>

void main()
{
    int i,n,start,end,count=0;

    printf("Enter Input Size :");

    scanf("%d",&n);

    start=clock();
    for(i=n/2; i<=n; i++)

    { count++;

       printf(" Md Torikul Islam \n");

    }

    end=clock();
     printf(" For N = %d , Loop Run %d times\n",n,count);

     printf("Algorithm Time complexity is Bog O of (N/2) --->  %lf second\n",(double)(end-start)/1000);

}
