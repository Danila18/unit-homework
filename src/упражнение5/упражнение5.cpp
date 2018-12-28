#include <iostream>
using namespace std;
int main() {
    const int n = 10;
    int a[n];
    int i, k, j;
    for (i = 0; i < n; i++)
        {
            cout << "a[" << i << "]= ";
            cin >> a[i];
        }
        k = 0;
        for (i = 0; i < n; i++)
            {
                if (a[i] > 0) {
                    k += 1;
                    if (k ==3) {
                        cout << i;
                        break;
                    }
                }
            }
}
