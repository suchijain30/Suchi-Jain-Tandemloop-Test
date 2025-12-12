// Program-2.cpp
// With a single integer as the input, generate the following until a = x [series of numbers as shown in below examples 1,3, 5, 7, .... ]

#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    for (int i = 0; i < a; i++) {
        cout << (2 * i + 1);
        if (i != a - 1) cout << ", ";
    }

    return 0;
}
