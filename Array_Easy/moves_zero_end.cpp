#include <bits/stdc++.h>
using namespace std;

void moveZeroesToEnd(int a[], int n) {
    int index = 0; // points to where the next non-zero element should go
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            swap(a[i], a[index]);
            index++;
        }
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int a[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    moveZeroesToEnd(a, n);

    cout << "Array after moving zeros: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
