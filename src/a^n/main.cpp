#include <iostream>
using namespace std;
int main() { // вычисляет a^n, введённые с клавиатуры
    int a, n, i, p;
    cin >> a >> n;
    p = a;
    for (i = 1; i < n; i++)
        {
            p = p * a;
        }
        cout << p;
}
