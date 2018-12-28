#include <iostream>
using namespace std;
int main() {
    int i, n, l = 1, lmax = 1; // нахождение самой длинной возрастающей последовательности чисел
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n - 1; i++)
            {
                if (a[i] < a[i + 1]) l = l + 1;
                else {
                    if (l > lmax) lmax = l;
                    else l = 1;}
            }
            cout << lmax;
}