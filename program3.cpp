// Program-3.cpp
// a = odd -> print a odd numbers
// a = even -> print (a-1) odd numbers

#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    int count = (a % 2 == 1) ? a : (a - 1); // odd -> a, even -> a-1

    for (int i = 0; i < count; i++) {
        cout << (2 * i + 1);
        if (i != count - 1) cout << ", ";
    }

    return 0;
}

