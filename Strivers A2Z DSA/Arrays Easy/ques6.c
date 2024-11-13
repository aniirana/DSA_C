#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6};
    int step;
    printf("Enter the steps by which you want to rotate the array\n");
    scanf("%d",&step);
    int temparr[7];
    //if shifting left side 
    for(int i =0;i<step;i++)
    {
        temparr[i]=arr[i];

    }
    for(int i=0;i<6;i++)
    {
        arr[i]=arr[i+step];
       
    }
    int j=0;
    for(int i=6-step;i<6;i++)
    {

        arr[i]=temparr[j];
        j++;
    }
    for(int i=0;i<6;i++)
    {
        printf("%d",arr[i]);
    }
    

    

}