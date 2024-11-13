#include<stdio.h>
int main()
{
    int arr1[] = {1,2,3,4,5};  
    int n = 5,m = 5;
    int arr2[] = {2,3,4,4,5};
    int arr3[10],k=0,count=0;

    for (int i = 0; i < n; i++)
    {
       for(int j=0;j<m;j++)
       {
            if(arr1[i]!=arr2[j])
            {
                arr3[k]=arr1[i];
                k++;
                count++;
                
            }
           
       }
    }

    for(int i=0;i<count;i++)
    {
        printf("%d\n",arr3[i]);
    }
    
    
}