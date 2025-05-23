#include <iostream>
#include <ctime>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

double averageTime(int arr[], int n) {
    const int repetitions = 10000;
    clock_t start = clock();

    for (int t = 0; t < repetitions; t++) {
        int temp[100];
        for (int i = 0; i < n; i++) temp[i] = arr[i];
        insertionSort(temp, n);
    }

    clock_t end = clock();
    double total = (double)(end - start) / CLOCKS_PER_SEC * 1e6; // microseconds
    return total / repetitions;
}

int main() {
    int arr1[5] = {5, 4, 3, 2, 1};
    int arr2[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int arr3[50]; for (int i = 0; i < 50; i++) arr3[i] = 50 - i;
    int arr4[100]; for (int i = 0; i < 100; i++) arr4[i] = 100 - i;

    cout << "Insertion Sort Average Times (10000 runs):\n";
    cout << "Arr1 (5):    " << averageTime(arr1, 5) << " us\n";
    cout << "Arr2 (10):   " << averageTime(arr2, 10) << " us\n";
    cout << "Arr3 (50):   " << averageTime(arr3, 50) << " us\n";
    cout << "Arr4 (100):  " << averageTime(arr4, 100) << " us\n";

    return 0;
}
