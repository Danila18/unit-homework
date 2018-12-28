#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int i, n, max; // Максимум в массиве
    cin >> n;
    int *arr = new int [n];
    for (i = 0; i < n; i++)
        {
            cout << "arr[" << i << "]= ";
            cin >> arr[i];
        }
        max = arr[0];
        for (i = 1; i < n; i++)
            {
                if (arr[i] > max) max = arr[i];
            }
            cout << max;
}