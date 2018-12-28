#include <iostream>
using namespace std;
int main() {
    const int n = 10;
    int a[n];
    int i, l, lmax, s, smax;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    s = a[0];
    smax = a[0];
    for (i = 1; i < n; i++) {
            if (a[i] > a[i - 1]) {
                s += a[i];
                if (s > smax) smax = s;
            }
            else s = 0;
        }
        cout << smax;
}
