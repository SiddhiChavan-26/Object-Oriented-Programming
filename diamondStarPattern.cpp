#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows (half of the diamond): ";
    cin >> n;

    // Upper half including middle row
    for(int i = 1; i <= n; ++i) {
        // Print spaces
        for(int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        // Print stars
        for(int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half
    for(int i = n - 1; i >= 1; --i) {
        // Print spaces
        for(int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        // Print stars
        for(int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

