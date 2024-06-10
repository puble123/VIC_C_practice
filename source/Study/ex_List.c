#include <stdio.h>

typedef struct node
{
    int data;
    struct node* next;
} Node;

typedef struct list
{
    Node *head;
} List;

void main(void)
{
    Node * a[10];

    for(int i = 0; i < 10; i++)
    {
        a[i]->data = i; // Set data

        if(i!=0)
        {a[i-1]-> next = a[i];}
    }


}

