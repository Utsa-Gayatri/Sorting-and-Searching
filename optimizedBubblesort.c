#include<stdio.h>

int main()
{
    int n,term,flag=0;
    printf("Enter the array size : \n");
    scanf("%d",&n);
    int i=1,A[n];
    printf("Enter the array elements : \n");
        for(int i=0;i<n;i++)
        {
            scanf("%d",&A[i]);
        }
   
   for(int pass=1;pass<=n;pass++)
   {
    for(i=1;i<n;i++)
    {
        if(A[i]<A[i-1])
        {
            term=A[i-1];
            A[i-1]=A[i];
            A[i]=term;
            flag++;
        }
    }
    if(flag==0)
    {
      printf("Array is sorted, at pass : %d \n",pass-1);break;
    }
    flag=0;
   }

printf("Array after sorting---> ");
    for(int i=0;i<n;i++)
    {printf("%d ",A[i]);}

printf("\n");
return 0;
}
