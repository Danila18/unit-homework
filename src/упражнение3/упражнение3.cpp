#include <iostream>
using namespace std;
int main() {
    const int n = 10;
    int a[n];
    int i, j, x;
    for (i = 0; i < n; i++)
        {
            cout << "a[" << i << "]= ";
            cin >> a[i];
        }
        cin >> x;
    j = 0;
    for (i = 0; i < n; i++)
        {
          if (a[i] == x) {
              j = 1;
              break;
          }
        }
        if (j == 1) cout << i;
        else cout << "нет элементов";
}