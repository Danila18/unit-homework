#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int i, n, a; // Шеренга
    cout << "количество учеников = ";
    cin >> n;
    cout << "рост Пети = ";
    cin >> a;
    int *arr = new int [n];
    for (i = 0; i < n; i++)
        {
            cout << "рост ученика[" << i << "]= ";
            cin >> arr[i];
        }
        for (i = n - 1; i >= 0; i--)
            {
                if (a <= arr[i]) {
                    cout << i + 1; // место Пети в шеренге, если рост учеников одинаковый, то он встаёт за ними
                    break;
                }
            }

}