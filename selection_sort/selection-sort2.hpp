void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void sSort(int array[], int SIZE) {
    for (int i = 0; i < SIZE-1; i++) {
        int smallestIndex = i;
        for (int j = i+1; j < SIZE; j++) {
            if (array[smallestIndex] > array[j]) {
                smallestIndex = j;
            }
        }
        if (smallestIndex != i) {
            swap(array[i], array[smallestIndex]);
        }
    }
}