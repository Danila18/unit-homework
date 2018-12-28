#include <iostream>
using namespace std;
int main() {
    int i, n, s; // количество чисел больших предыдущих
    cin >> n;
    int *arr = new int [n];
    for (i = 0; i < n; i++)
        {
            cout << "mas[" << i << "]" << "=";
            cin >> arr[i];
        }
        for (i = 0; i < n; i++)
            {
                if (arr[i + 1] > arr[i]) s += 1;
            }
    cout << s;
}
