#include <iostream>
using namespace std;
int main() {
    int i, n = 10, c = 0;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == 0) {
            swap(a[i], a[c]);
            c += 1;
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
