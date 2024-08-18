#include<stdio.h>
int main()
{
     int n=6,ar[100];
    int temp;
     printf("Enter the size: \n");
    scanf("%d",&n);
    printf("Enter the array elements : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
   
    for(int j=0;j<n;j++)
    {
    for(int i=1;i<n;i++)
    {
        if(ar[i]<ar[i-1])
        {
temp=ar[i-1]+ar[i];
ar[i]=ar[i-1];
ar[i-1]=temp-ar[i];
        }
    }
    }


    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
}