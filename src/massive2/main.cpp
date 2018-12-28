#include <iostream>
using namespace std;
int main() {
    int i, n, s = 0; //Количество элементов больших обоих соседей
    cin >> n;
    int *arr = new int [n];
    for (i = 0; i < n; i++)
        {
            cout << "arr[" << i << "]=";
            cin >> arr[i];
        }
        for (i = 0; i < n; i++)
            {
                if (arr[i] > arr[i-1] && arr[i] > arr[i+1])
                    s += 1;
            }
            cout << s;
}