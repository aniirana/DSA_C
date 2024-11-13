#include<stdio.h>
int main()
{
    int arr[5]={1,2,4,5};
    int n=5;
    int sum1=n*(n+1)/2;
    int sum2=0;;
    for (int i=0;i<n;i++)
    {
        sum2+=arr[i];
    }
    int missin_no=sum1-sum2;
    printf("%d",missin_no);
}