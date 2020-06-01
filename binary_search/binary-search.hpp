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


int recursiveBinarySearch(int array[], int low, int high, int search) {
    
    if (low > high) {
        return -1;
    } else {
        int mid = (high+low)/2;
        if (array[mid] == search) return mid;
        else if (array[mid] > search) return recursiveBinarySearch(array, low, mid-1, search);
        else return recursiveBinarySearch(array, mid+1, high, search);

    }



}