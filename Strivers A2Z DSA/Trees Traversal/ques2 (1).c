#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node*prev;
    int data;
    struct node*next;
};

struct node *createnode(int key)
{
    struct node *n=(struct node*)malloc(sizeof(struct node));
    n->data=key;
    n->next=NULL;
    n->prev=NULL;
    return n;
}

int main()
{

int arr[]={1,2,3,4,5,6,7};
for(int i=0;i<6;i++)
{

    int key=arr[i];
    struct node *p=createnode(key);
}






}