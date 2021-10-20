#include<stdio.h>

int main()
{
    int stack[5], top=-1, value, operation;

    printf("Enter 1 for push, 2 for pop, 3 to show the top.\n");
    printf("Enter 0 For Exit\n");
    while(1)
    {
        printf("Choice What do You Want? ");
        scanf("%d", &operation);

        if(operation ==0)
        {
            printf("Exit\n");
            break;
        }

        if(operation ==1)
        {
            ///push
            printf("Please Give Value: ");
            top++;
            if(stack(top)<=4)
            {
                printf("Stack Full");
            }
            scanf("%d", &stack[top]);
            printf("Push Done \n");
        }
        else if(operation == 2)
        {
            ///Pop
            top--;
            printf("Pop Done\n");
        }
        else if(operation == 3)
        {
            ///Top
            printf("Top values: %d\n", stack[top]);
        }
        else
        {
            printf("Please Put valid Input????\n");
        }
    }


    return 0;
}
