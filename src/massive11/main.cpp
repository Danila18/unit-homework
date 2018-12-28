#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int i, n, a = 4, b, d;
    cin >> n;
    int arr[i];
    for (i = 0; i < n; i++)
        {
            cout << "arr[" << i << "]= ";
            cin >> arr[i];
        }
    for (i = 0; i < a; i++)
        {
        b = arr[0];
        for (i = 0; i < n - 1; i++)
                {
                    arr[i] = arr[i+1];
                }
                arr[n-1] = b;
        }
        for (i = 0; i < n; i++)
            {
                cout << arr[i] << setw(3);
            }

}