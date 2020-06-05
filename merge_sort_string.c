#include<stdio.h>
#include<string.h>
void merge(char arr[],int lower,int mid,int upper)
{
    int n1= mid-lower+1;
    int n2=upper-mid;
    char left[n1],right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i]=arr[lower+i];
    }
    for(int j=0;j<n2;j++)
    {
        right[j]=arr[mid+1+j];
    }
    int i=0,j=0,k=lower;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j]){
            arr[k++] = left[i++];
        }
        else
        {
            arr[k++]=right[j++];
        }
    }
    for(;i<n1;i++)
    {
        arr[k++]=left[i];
    }
    for(;j<n2;j++)
    {
        arr[k++] = right[j];
    }
    
}
void MergeSort(char arr[],int lower,int upper)
{
    if(lower<upper)
    {
        int mid =(upper+lower)/2;
        MergeSort(arr,lower,mid);
        MergeSort(arr,mid+1,upper);
        merge(arr,lower,mid,upper);
    }
}

int main()
{
    char arr[]={"Polynomial"};
    char arr2[]={"Test Case"};
    int n= strlen("Polynomial");
    int n1=strlen("Text Case");
    MergeSort(arr,0,n);
    MergeSort(arr2,0,n);
    for (int i = 0; i < n; i++)
    {
        printf("%c\t",arr[i]);
    }
    printf("\n");
   for (int i = 0; i < n1; i++)
    {
        printf("%c\t",arr2[i]);
    }
    printf("\n");
}