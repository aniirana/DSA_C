#include<stdio.h>
int main()
{
    int arr[5]={1,2,5,9,8};
    int max = 1;
    for(int i=0;i<5;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
   printf("%d",max);
}