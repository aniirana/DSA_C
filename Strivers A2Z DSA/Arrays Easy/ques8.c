#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5,};
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    for(int i=0;i<5;i++)
    {
        if(num==arr[i])
        {
            printf("The index of the enetered number is %d",i);
        }
    }
}