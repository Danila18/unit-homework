#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int i, n, j; // вывести вначале все чётные числа, а потом нечётные в массиве
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
            {
                for (j = i; j < n; j++)
                {
                    if (a[j] % 2 == 0){
                        swap(a[i], a[j]);
                    }
                }
            }
            for (i = 0; i < n; i++)
            {
                cout << a[i];
            }
}