#include<stdio.h>
#include<time.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int part(int arr[],int lower,int upper)
{
    int i = lower-1;
    int pivot = arr[upper];
    for (int j = lower; j < upper; j++)
    {
        if(pivot>arr[j])
        {             
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[upper]);
    return i+1; 
}


void QuickSort(int arr[],int lower,int upper)
{
    if(lower<upper)
    {
        int partition = part(arr,lower,upper);
        QuickSort(arr,lower,partition-1);
        QuickSort(arr,partition+1,upper);
    }
}

int main()
{
    int arr[10000];
    for (int i = 10000; i > 0; i--)
    {
        arr[i]=rand();
    }
    QuickSort(arr,0,10000);
    for (int i = 0; i < 6; i++)
        printf("%d\t",arr[i]);
}