#include <iostream>
using namespace std;
int main() {
    int i, n = 10, max1, max2, max3;
    int a[n];
    for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        max1 = a[0];
        max2 = a[1];
        max3 = a[2];
    if (max2 > max1 && max2 > max3 && max1 > max3) {
        max1 = a[1];
        max2 = a[0];
    }
    if (max3 > max2 && max3 < max1) {
        max3 = a[1];
        max2 = a[2];
    }
    if (max3 > max1 && max3 > max2 && max1 < max2) {
        max1 = a[2];
        max3 = a[0];
    }
    for (i = 3; i < n; i++)
        {
            if (a[i] > max1) {
               max3 = max2;
               max2 = max1;
               max1 = a[i];
            }
            else {
                if (a[i] > max2) {
                    max3 = max2;
                    max2 = a[i];
                }
                else {
                    if (a[i] > max3) {
                        max3 = a[i];
                    }
                }
            }
        }
        cout << max1 << " " << max2 << " " << max3;
}
