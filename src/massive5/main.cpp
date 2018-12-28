#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int i, n; // Циклический сдвиг вправо
    cin >> n;
    int *arr = new int [n];
    for (i = 0; i < n; i++)
        {
            cout << "arr[" << i << "]= ";
            cin >> arr[i];
        }
        for (i = 0; i < n; i++)
            {
                if (i == n - 1) break;
                swap(arr[0], arr[i+1]);
            }
            for (i = 0; i < n; i++)
                {
                    cout << arr[i] << setw(3);
                }
}