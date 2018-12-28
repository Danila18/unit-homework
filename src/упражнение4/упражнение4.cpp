#include <iostream>
using namespace std;
int main() {
    const int n = 10;
    int a[n];
    int i, k, max, max2;
    for (i = 0; i < n; i++)
        {
            cout << "a[" << i << "]= ";
            cin >> a[i];
        }
        max = a[0];
        max2 = a[0];
    for (i = 1; i < n; i++)
        {
        if (a[i] > max2) {
            max2 = a[i];
            if (a[i] > max) {
                max2 = max;
                max = a[i];
            }
        }
        }
        cout << max2;
}
