#include <iostream>
#include <cmath>
using namespace std;
int main() {
    const int n = 10;
    int a[n];
    int i, k;
    float s, min;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
        k = 0;
        s = 0;
        for (i = 0; i < n; i++) {
            s += a[i];
            k += 1;
        }
    s = s/k;
        min = a[0];
        for (i = 1; i < n; i++) {
        if (abs(a[i] - s) < abs(a[i - 1] - s)) min = a[i];
    }
    cout << min;
}
