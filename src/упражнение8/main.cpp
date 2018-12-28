#include <iostream>
using namespace std;
int main() {
    const int n = 10;
    int a[n];
    int i, j, min, min2, s;
    for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (a[0] < a[1]) {
            min = a[0];
            j = 0;
            min2 = a[1];
            s = 1;
        }
        else {
            min = a[1];
            min2 = a[0];
        }
        for (i = 2; i < n; i++)
            {
                if (a[i] < min2 && a[i] < min) {
                    min = a[i];
                    j = i;
                }
                else if (a[i] < min2 && a[i] > min) {
                    min2 = a[i];
                    s = i;
                }
            }
            cout << j << " " << s;
}