#include<stdio.h>
void BubbleSort(int arr[],int upper)
{
    for (int i = 0; i < upper-1; i++)
    {
        for (int j = 0; j < upper-i-1; j++)
            if(arr[j]>arr[j+1])
            {
                arr[j]=arr[j+1]+arr[j];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
            }
    }
}

int main()
{
    int arr[10000];
    for (int i = 10000; i>0; i--)
        arr[i]=rand();
    BubbleSort(arr,10000);
    for (int i = 0; i < 6; i++)
        printf("%d\t",arr[i]);
}