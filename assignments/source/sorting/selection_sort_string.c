#include <stdio.h>
#include <string.h>

void selection_sort(char *arr[], int n) {
    int i, j, min_idx;
    char temp[100];

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (strcmp(arr[j], arr[min_idx]) < 0) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[min_idx]);
            strcpy(arr[min_idx], temp);
        }
    }
}

int main() {
    char *arr[] = {"dog", "cat", "apple", "banana", "zebra", "fish", "grape", "elephant"};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Before sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }

    selection_sort(arr, n);

    printf("\nAfter sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }

    return 0;
}

