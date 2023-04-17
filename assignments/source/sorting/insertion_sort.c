#include<stdio.h>
int insert(int num[], int n, int i, int j, int temp);
int main(){
	int num[10];
	int n,i,j,temp;
	printf("enter the no of elements:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	insert(num,n,i,j,temp);
} 
int insert(int num[], int n, int i, int j, int temp)
{
	for(i = 1; i <= n - 1; i++)
    {
        for(j = i; j > 0 && num[j - 1] > num[j]; j--)
        {
                temp = num[j];
                num[j] = num[j - 1];
                num[j - 1] = temp;
        }
    }
    printf("\n Insertion Sort Result : ");
    for(i = 0; i < n; i++)
    {
        printf(" %d \t", num[i]);
    }
    return 0;
}
