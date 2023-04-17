#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void merge(char *arr[], int left, int middle, int right) {
    int i, j, k;
    int n1 = middle - left + 1;
    int n2 = right - middle;
    char *L[n1], *R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[middle + 1 + j];
    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (strcmp(L[i], R[j]) < 0) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void merge_sort(char *arr[], int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;
        merge_sort(arr, left, middle);
        merge_sort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}
int main() {
    char *arr[] = {"dog", "cat", "apple", "banana", "zebra", "fish", "grape", "elephant"};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Before sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
	}
    merge_sort(arr, 0, n - 1);
    printf("\nAfter sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }
    return 0;
}
