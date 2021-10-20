#include<stdio.h>

struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 4;
    head->next = second;

    second->data = 420;
    second->next = third;

    third->data = 393;
    third->next = NULL;

    struct Node* matha = head;

    int pos, c=0;
    scanf("%d", &pos);



    while(matha != NULL)
    {
        c++;
        if(c==pos)
        {
            struct Node* notun = NULL;
            notun = (struct Node*)malloc(sizeof(struct Node));
            scanf("%d", &notun->data);
            notun->next = matha->next;
            matha->next = notun;
            break;
        }
        matha = matha->next;
    }

    matha = head;

    while(matha != NULL)
    {
        printf("%d ", matha->data);
        matha = matha->next;
    }


    return 0;
}

