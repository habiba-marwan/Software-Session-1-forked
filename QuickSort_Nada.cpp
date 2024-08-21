#include <iostream>
#include <vector>

using namespace std;

int division(vector<int>& arr, int low, int high);

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pointer = division(arr, low, high);
        quickSort(arr, low, pointer - 1);
        quickSort(arr, pointer + 1, high);
    }
}
int division(vector<int>& arr, int low, int high) {
    int pointer = arr[high];
    int k = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pointer) {
            k++;
            swap(arr[k], arr[j]);
        }
    }

    swap(arr[k + 1], arr[high]);
    return k + 1;
}

int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int size = arr.size();

    quickSort(arr, 0, size - 1);

    cout << "Sorted array: \n";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
