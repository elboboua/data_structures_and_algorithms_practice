int recursiveSum(int array[], int SIZE) {
    if (SIZE - 1 == 0) return array[SIZE-1];
    else return array[SIZE-1] + recursiveSum(array, SIZE-1);
}

int recursiveSum2(int array[], int begin, int SIZE) {
    if (begin == SIZE - 1) return array[begin];
    else return array[begin] + recursiveSum2(array, begin+1, SIZE);
}


int recursiveFindLargestInt(int array[], int SIZE, int max = INT_MIN ) {
    if (SIZE == 0) {
        return max;
    } else {
        if (array[SIZE-1] > max) {
            max = array[SIZE-1];
        }
            return recursiveFindLargestInt(array, SIZE-1, max);
    }
}