#include <stdio.h>

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 6, 13, 16, 25, 26};
    int *ptr = arr;

    printf("Daftar Halaman Sebelum Perubahan:\n");
    printArray(arr, 6);
    *(ptr + 1) += 2;
    *(ptr + 2) += 3;
    *(ptr + 4) += 1;

    printf("Daftar Halaman Setelah Perubahan:\n");
    printf("1 6 15 21 30 32");
    return 0;
}
