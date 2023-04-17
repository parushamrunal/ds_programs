#include<stdio.h>
int main() {
	int arr[20] = {1,2,1,3,1,4,5,1,9,8,1};
	int n = 11;
	int i,j;
	for(i = 0;i <n - 1;i++) {
		for(j = i +1;j < n; j++) {
			if(arr[i] == 1) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(i = 0;i<n;i++) {
		printf("%d ",arr[i]);
	}
}
