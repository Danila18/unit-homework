#include <iostream>
using namespace std;
int main() {
    int i, n, imax = 0; // нахождение максимума
    cin >> n;
    int *arr = new int [n];
    for (i = 0; i < n; i++)
        {
            cout << "arr[" << i << "]= ";
            cin >> arr[i];
            if (arr[i] > arr[imax])
                imax = i;
        }
        cout << arr[imax];
}
