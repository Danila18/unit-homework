#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int i, n, a; // Переставить соседние элементы
    cin >> n;
    int *arr = new int [n];
    for (i = 0; i < n; i++)
        {
            cout << "arr[" << i << "]=" << " ";
            cin >> arr[i];
        }
        a = arr[n - 1];
        for (i = 0; i < n; i+=2)
            {
                swap (arr[i], arr[i + 1]);
            }
            if (n % 2 !=0) arr[n - 1] = a;
            for (i = 0; i < n; i++)
                {
                    cout << arr[i] << setw(3);
                }
}
