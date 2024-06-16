#include <chrono>
#include <iostream>

#include "utils.h"

using namespace std;

RunInfo benchmark(int a[], int n, int (*sort)(int a[], int n)) {
    long long merge_sort_time;

    auto start = chrono::steady_clock::now();
    int comparisions = sort(a, n);
    auto end = chrono::steady_clock::now();
    long long elapsed_time = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    return RunInfo {elapsed_time, comparisions};
}