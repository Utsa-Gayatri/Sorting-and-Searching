#include<stdio.h>

void printArray(int *A,int n)
{
    for(int i=0;i<n;i++)
    {printf("%d ",A[i]);}

printf("\n");
}


int divide(int A[],int low,int high)
{
    int p,q,pivot=A[low];
p=low+1;q=high;

do{
while(A[p]<=pivot)
{
    p++;
}
while(A[q]>=pivot)
{
    q--;
}

if(p<q){
int temp=A[p];
    A[p]=A[q];
    A[q]=temp;
}
} while(p<q);

int temp=A[low];
    A[low]=A[q];
    A[q]=temp;
    return q;
}

void quickSort(int A[],int low,int high)
{
    int partitionIndex;

    if(low<high){   
   partitionIndex= divide(A,low,high);
   quickSort(A,low,partitionIndex-1);
   quickSort(A,partitionIndex+1,high);
}}

int main()
{
    int n;
    printf("Enter the array size : \n");
    scanf("%d",&n);
int A[n];
 printf("Enter the array elements : \n");
 for(int i=0;i<n;i++)
 {
    scanf("%d",&A[i]);
 }
printf("Before sorting : \n");
printArray(A,n);
quickSort(A,0,n-1);
printf("After sorting : \n");
printArray(A,n);
return 0;
}


