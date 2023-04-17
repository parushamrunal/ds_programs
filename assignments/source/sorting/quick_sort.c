#include <stdio.h>
#include<stdlib.h>
void printArr(int arr[],int n);
int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    int temp;
    while (i < j) {
        while (arr[i] <= pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    arr[low] = arr[j];
    arr[j] = pivot;
    return j;
}
void quickSort(int arr[], int low, int high)
{
    if (low < high) {
        int locationOfPivot = partition(arr, low, high);
        quickSort(arr, low, locationOfPivot - 1);
        quickSort(arr, locationOfPivot + 1, high);
    }
}
int main()
{
    int arr[10],n,i;
    printf("enter no.of elements:\n");
    scanf("%d",&n);
    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    printf("Before sorting array elements are - \n");
    printArr(arr, n);
    quickSort(arr, 0, n - 1);
    printf("\nAfter sorting array elements are - \n");
    printArr(arr, n);
    return 0;
}
void printArr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
