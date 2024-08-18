#include<stdio.h>
int main()
{
    int ar[]={10,20,30,40,50};
    int i=0,low=0,high,mid,k=50;
    high=4;
    mid=(low+high)/2;
    for(int i=low;i<=high;i++)
    {
        if(k==ar[mid])
        {
        break;
        }

        else if(k<ar[mid])
        {
        high=mid;mid=(low+high)/2;
        }

        else{
            low=mid+1;mid=(low+high)/2;
        }
    }
    printf("Element found at Index : %d",mid);
    return 0;
}