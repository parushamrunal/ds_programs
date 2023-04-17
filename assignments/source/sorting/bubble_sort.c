#include<stdio.h>
int bubble(int arr[],int n,int i,int j,int temp);
int main(){
        int arr[5];
        int i,j,n,temp;
        printf("enter the no of elements:");
        scanf("%d",&n);
        printf("enter the array elements:");
        for(i=0;i<n;i++){
                scanf("%d",&arr[i]);
        }
        bubble(arr,n,i,j,temp);
        printf("sorted array:");
        for(i=0;i<n;i++){
                printf("%d",arr[i]);
        }
}
int bubble(int arr[], int n, int i, int j, int temp){
        for(i=0;i<n-1;i++){
                for(j=0;j<n-i-1;j++){
                        if(arr[j]>arr[j+1]){
                                temp=arr[j];
                                arr[j]=arr[j+1];
                                arr[j+1]=temp;
                        }
                }
        }
        return 0;
}
