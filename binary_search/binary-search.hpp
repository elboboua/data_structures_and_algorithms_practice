int binarySearch(int array[], int size, int search) {
    int high = size - 1;
    int low = 0;
    int mid;

    while (low <= high) {
        mid = (low+high)/2;
        
        if (array[mid] == search) {
            return mid;
        } else if (array[mid] > search) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return -1;


}