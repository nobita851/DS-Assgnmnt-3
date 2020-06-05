
#include<stdio.h>

void InsertionSort(int arr[],int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        j=arr[i];
        k=i-1;
        while(arr[k]>j && k>=0)
        {     
            arr[k+1] = arr[k];
            k=k-1;
        }
        arr[k+1]=j;
    }
}
int main()
{
    int arr[10000];
    for (int i = 10000; i>0; i--)
        arr[i]=rand();
    InsertionSort(arr,10000);
    for (int i = 0; i < 6; i++)
        printf("%d\t",arr[i]);
}

