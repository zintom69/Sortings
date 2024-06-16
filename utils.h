struct RunInfo {
    long long elapsed_time = 0; // milliseconds. 1s = 1000 ms
    int comparisons = 0;
};

void swap(int &x, int &y);

/**
 * Return: comparisions count
 *  */ 
int insertionSort(int a[], int n);
int bubbleSort(int a[], int n);
int shakerSort(int a[], int n);

int mergeSort(int a[], int n);
int heapSort(int a[], int n);
int shellSort(int a[], int n);

int flashSort(int a[], int n);

int selectionSort(int a[], int n);
int countingSort(int a[], int n);
int radixSort(int a[], int n);

RunInfo benchmark(int a[], int n, int (*sort)(int a[], int n));
