#include <iostream>
using namespace std;
int main() {
    int i, x, y;
    const int n = 10;
    int a[n];
    float s;
    for (i = 0; i < n; i++)
        {
            cout << "arr[" << i << "]= ";
            cin >> a[i];
        }
        y = 200;
        for (i = 1; i < n; i++)
            {
                if  (a[i] > 180 && a[i] < y)
                    y = a[i];
            }
            cout << y;
}