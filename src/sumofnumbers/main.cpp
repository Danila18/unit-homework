#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a, s, b; // сумма цифр введённого числа
    cin >> a;
    s = 0;
        while (a != 0) {
            s = s + a % 10;
            a = a / 10;
        }
    if (s >= 0)
        cout << s;
        else {
        s = abs(s);
        cout << s;
    }
}
