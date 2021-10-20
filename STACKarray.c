#include<stdio.h>

int main()
{
    int stack[5], top=-1, value, operation;

    printf("Enter 1 for push, 2 for pop, 3 to show the top.\n");
    printf("-1 venge dite\n");
    while(1)
    {
        printf("Choice koren: ");
        scanf("%d", &operation);

        if(operation ==-1)
        {
            printf("Venge gelo\n");
            break;
        }

        if(operation == 1)
        {
            ///push
            printf("value den: ");
            top++;
            scanf("%d", &stack[top]);
            printf("Push hoise\n");
        }
        else if(operation == 2)
        {
            ///Pop
            top--;
            printf("Pop hoise\n");
        }
        else if(operation == 3)
        {
            ///Top
            printf("Top e ase: %d\n", stack[top]);
        }
        else
        {
            printf("Matha kharap hoise naki???? option dekhen nai????\n");
        }
    }


    return 0;
}
