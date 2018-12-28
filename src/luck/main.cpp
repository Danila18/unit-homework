#include <iostream>
using namespace std;
int main() {
    int a, b, i;
    float s;
    s = 0;
    for (i = 100; i <= 999; i++)
        {
            b = (i % 100) / 10 + i % 10;
            a = i / 100;
            if (a == b)
            s = s + 1;
        }
        s = s / 899 * 100;
    cout << s << "%";
}// вычисление шанса выпадания счастливого билета в автобусе