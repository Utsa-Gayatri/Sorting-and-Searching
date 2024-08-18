#include<stdio.h>
//print the array after sorting
int print(int *ar,int n)
{
for(int i=0;i<n;i++)
{
printf("%d",ar[i]);
}
printf("\n");
}

//merge the array
void merge(int ar[],int mid,int low,int high)
{
    int i=low;
    int k=low;
    int j=mid+1;
    int B[100];
     while(i<=mid && j<=high)
     {
        if(ar[i]<ar[j])
        {
        B[k]=ar[i];
        i++; k++;
        }
        else{
        B[k]=ar[j];
        j++;k++;
     }
     }

     while(i<=mid)
     {
        B[k]=ar[i];
        i++;k++;
     }
     while(j<=high)
     {
        B[k]=ar[j];
        j++;k++;
     }
    
    for(int i=low;i<=high;i++)
    {
        ar[i]=B[i];
    }
}

// Merge Sort implemented
     void mergesort(int ar[],int low,int high)
     {
     int mid;
     if(low<high)
     {
        mid=(low+high)/2;
        mergesort(ar,low,mid);
        mergesort(ar,mid+1,high);
        merge(ar,mid,low,high);
     }
   }

//To call the functions 
int main()
{
    int n,ar[100];
     printf("Enter the size: \n");
    scanf("%d",&n);
    printf("Enter the array elements : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

print(ar,n);
mergesort(ar,0,n-1);
print(ar,n);
return 0;
}