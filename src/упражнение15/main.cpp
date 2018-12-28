#include <iostream>
using namespace std;
const int n = 4;
int main() {
    int a[n];
    int i, k, s;
    for (i = 0; i < n; i++)
        {
        cin >> a[i];
        }
        k = 30000;
        for (i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0 && a[i] < k) k = a[i];
            }
            s = 20 - k;
            for (i = 0; i < n; i++)
                {
                    if (a[i] % 2 == 0) {
                        a[i] += s;
                    }
                    cout << a[i] << endl;
                }
}