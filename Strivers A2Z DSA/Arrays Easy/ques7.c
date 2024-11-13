#include<stdio.h>
int main()
{
    int arr[8]={1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
    int temparr[10];
    int j=0,count=0;
    for(int i=0;i<8;i++)
    {
        if(arr[i]==0)
        {
            temparr[j]=arr[i];
            j++;
            count++;
        }
    
    }
    printf("%d\n",count);
    for(int i=0;i<count;i++)
    {
        printf("%d\n",temparr[i]);

    }

}