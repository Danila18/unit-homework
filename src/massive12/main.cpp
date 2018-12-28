#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
    int i;
    int a[10];
    for (i = 0; i < 10; i++)
        {
            a[i] = rand()%6+4;
            cout << a[i] << " ";
        }
}