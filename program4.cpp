// Program-4.cpp
// Count how many numbers in the list are multiples of 1..9

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;   // first read size of vector

    vector<int> arr(n);

    // Read exactly n numbers
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result[10] = {0}; // we use index 1..9

    for (int k = 1; k <= 9; k++) {
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] % k == 0)
                count++;
        }

        result[k] = count;
    }

    cout << "{";
    for (int k = 1; k <= 9; k++) {
        cout << k << ": " << result[k];
        if (k != 9) cout << ", ";
    }
    cout << "}";

    return 0;
}
