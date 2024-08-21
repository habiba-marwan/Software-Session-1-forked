#include <bits/stdc++.h>

using namespace std;

void bubble_sort (vector <int> &v) {
    int n = v.size();
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
            break;
    }
}

int main () {

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector <int> v(n);
    cout << "Enter the values of the array: ";

    for (int i = 0; i < n; i ++) {
        cin >> v[i];
    }

    bubble_sort (v);

    for (int i = 0; i < n; i ++) {
        cout << v[i] << " ";
    }

}
