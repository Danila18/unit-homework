#include <iostream>
using namespace std;
int main() {
    const int n = 10;
    int a[n];
    int i, x, y;
    float s;
    for (i = 0; i < n; i++)
        {
            cout << "a[" << i << "]= ";
            cin >> a[i];
        }
        x = 0;
        y = 0;
        for (i = 0; i < n; i++)
            {
                if (a[i] > 0) {
                    x += 1;
                    y += a[i];
                }
            }
            s = float(y)/x;
        cout << s;
}