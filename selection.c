#include<stdio.h>
int main()
{
    int n,ar[100];
    int smallestindex;
    int temp;
    printf("Enter the size: \n");
    scanf("%d",&n);
    printf("Enter the array elements : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    
    
    for(int i=0;i<n-1;i++)
    {
        smallestindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(ar[j]<ar[smallestindex])
            {
                smallestindex=j;
            }
        }
        temp=ar[smallestindex];
        ar[smallestindex]=ar[i];
        ar[i]=temp;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d \t",ar[i]);
    }

}