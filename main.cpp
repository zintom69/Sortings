#include <iostream>

#include "sortings.h"

using namespace std;

int main() {

    int a[] = {9, 81, 2, 3, 1, 7};
    int n = 6;
    RunInfo run = benchmark(a, n, quickSort);

    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << "\n";
    cout << run.elapsed_time << " " << run.comparisons << "\n";

    return 0;
}