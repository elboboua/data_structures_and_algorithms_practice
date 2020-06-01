
int calculateFactorial(int n) {

    for (int i = n-1; i > 0; i--) {
        n *= i;
    }

    return n;
}

int recursiveCalculateFactorial(int n) {
    if (n == 1) return 1;
    else return n * recursiveCalculateFactorial(n-1);
}