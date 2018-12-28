#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int i, j, n;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n/2 ; i++)
    {
        j = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = j;
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << setw(3);
    }
}
