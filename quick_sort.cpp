#include "quick_sort.h"
#include "utils.h"

int partition(int a[], int l, int r, int &comparisions) {
    int pivot = a[(l+r)/2];
    int i = l, j = r;
    while (++comparisions && i < j) {
        while (++comparisions && a[i] < pivot) ++i;
        while (++comparisions && a[j] > pivot) --j;

        if (++comparisions && i < j) {
            swap(a[i], a[j]);
            ++i;
            --j;
        }
    }
    return j;
}

int quickSort(int a[], int l, int r) {
    int comparisions = 0; 
    
    if (++comparisions && l >= r) 
        return comparisions;

    int p = partition(a, l, r, comparisions);
    comparisions += quickSort(a, l, p);
    comparisions += quickSort(a, p+1, r);
    return comparisions;
}

int quickSortComparisions(int a[], int n) {
    return quickSort(a, 0, n - 1);
}