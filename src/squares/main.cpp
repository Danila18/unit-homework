#include <iostream>
using namespace std;
int main() {
    int c;
        for (c = 10000; c<=99999; c++) {
            if (c % 133 == 125 && c % 134 == 111)
                cout << c << endl;
        }
    return 0;
}