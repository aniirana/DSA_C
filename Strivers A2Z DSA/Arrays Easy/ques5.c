#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int last=arr[0];
    for(int i=0;i<5;i++)
    {
        arr[i]=arr[i+1];

    }
    arr[5]=last;
    for(int i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }
}