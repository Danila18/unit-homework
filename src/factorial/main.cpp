#include <iostream>
using namespace std;
int main() { // вычисление факториала введённого числа n < 20
    int n, i, p;
    cin >> n;
    p = 1;
    for (i = 1; i <= n; i++){
        p = p * i;
    }
    cout << p;
}