#include<stdio.h>
int main()
{
    int arr1[]={1,2,3,4,5,6,7};
    int arr2[]={5,4,6,7,8};
    for(int i=0;i<7;i++)
    {
        if(arr1[i]<=arr1[i+1])
        {
            continue;
        }
        else
        printf("Array is not sorted");
        break;
    }

    for(int i=0;i<5;i++)
    {
        if(arr2[i]<=arr2[i+1])
        {
            continue;
        }
        else
        printf("Array is not sorted");
        break;
    }
}