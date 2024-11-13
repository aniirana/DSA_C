#include<stdio.h>
#include<math.h>

int countnodes(int i)
{
    int y=i-1;
    int result=pow(2,y);
    
    return result;
}


int main()
{
    int i;
    printf("Enter the number of level ");
    scanf("%d",&i);
    int result=countnodes(i);
    printf("The maximum nodes of level %d is %d",i,result);
}
