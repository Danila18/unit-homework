#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    int i, n;
    cin >> n;
    int *arr = new int [n];
    for (i = 0; i < n; i++)
        {
            cout << "arr[" << i << "]=";
            cin >> arr[i];
        }
        for (i = 0; i < n/2; i++)
            {
                swap (arr[i], arr[n - 1 - i]);
            }
        for (i = 0; i < n; i++)
            {
                cout << arr[i] << setw(3);
            }
}