#include <stdio.h>
#include <stdlib.h>

#define N 100  // Maximum number of integers to read from the file

void sortArray(int *arr, int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    FILE *file;
    int numbers[N];
    int size = 0;
    int number;

    printf("File manipulation in C programming:\n");

    file = fopen("number.txt", "r");
    if (file == NULL) {
        printf("THE FILE IS NOT FOUND IN PC:\n");
        exit(1);
    }

    // Read numbers from the file and store them in an array
    while (fscanf(file, "%d", &number) == 1 && size < N) {
        numbers[size++] = number;
    }

    fclose(file);

    // Sort the array of numbers
    sortArray(numbers, size);

    // Print the sorted numbers
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}