#include <iostream>
using namespace std;
int main()
{
    int n, i = 2;
    bool k = true;
    cout << "n = "; cin >> n;
    while (i <= n / 2) {
        if (!(n % i)) {
            k = false;
            break;
        }
        i++;
    }
    cout << "Число "
         << n
         << (k ? " простое" : " не является простым");
    return 0;
}