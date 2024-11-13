#include<stdio.h>
int main()
{
    int arr[7]={1,2,3,5,7,33,5};
    int max=1;
    int secondmax;
    for(int i=0;i<7;i++)
    {
        if(max<arr[i])
        {
            secondmax=max;
            max=arr[i];
        }
    }
    printf("%d",secondmax);
}