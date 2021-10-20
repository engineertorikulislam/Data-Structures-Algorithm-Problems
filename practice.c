#include <stdio.h>
struct{

int data;
struct node *next;
};*head;

void createList(int n);
void deleteFirstNode();
void displayList();

int main()
{
    int n, choice;

    printf("Enter the Total Number Of Nodes");
    scanf("%d",&n);
    createList(n);







}
