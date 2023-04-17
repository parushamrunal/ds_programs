#include <stdio.h>
void mergesort(int arr[],int,int);
void merge(int arr[],int,int,int);
void merge(int arr[],int left,int mid,int right)
{
    int s1= mid-left+1;
    int s2= right-mid;
    int arr1[s1];
    int arr2[s2];
    for(int m=0;m<s1;m++)
    {
        arr1[m]=arr[left+m];
    }
    for(int n=0;n<s2;n++)
    {
        arr2[n]=arr[mid+1+n];
    }
    int i=0,j=0;
    int k=left;
    while(i < s1 && j < s2)
    {
        if(arr1[i] <= arr2[j])
        {
            arr[k]=arr1[i];
            i++;
        }
        else
        {
            arr[k]=arr2[j];
            j++;
        }
        k++;        
    }
    while( i < s1 )
    {
        arr[k]=arr1[i];
        k++;
        i++;
    }
    while( j < s2 )
    {
        arr[k]=arr2[j];
        k++;
        j++;
    }
}

void mergesort(int arr[],int left,int right)
{
    if(left < right)
    {
        int mid= (left+right) / 2;
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}


int main(char name)
{
    int size=0;
    int arr[size];
    printf("Enter size of the array : ");
    scanf("%d",&size);
	printf("enter the array elements : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    mergesort(arr,0,size-1);
    printf("After Sorting\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
return 0;
} 
