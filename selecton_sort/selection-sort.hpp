void swap(int *x, int*y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int array[], int arraySize) {
    int min_idx;

    for (int i = 0; i < arraySize - 1; i++) {
        min_idx = i;
        for (int j = i + 1; j < arraySize; j++) {
            if (array[min_idx] > array[j]) {
                min_idx = j;
            }
        }
        swap(&array[i], &array[min_idx]);
    }
}


// selection-sort 2
void swap2(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sSort(int arr[], int n) {
    int min_idx;
    for (int i = 0; i < n-1; i++) {
        min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[min_idx] > arr[j]) {
                min_idx = j;
            }
        }
        swap(&arr[i],&arr[min_idx]);
    }
}