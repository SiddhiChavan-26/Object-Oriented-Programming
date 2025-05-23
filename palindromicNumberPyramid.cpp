#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int space = 1; space <= n - i; space++) {
            cout << "  ";
        }

        // Print decreasing numbers
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        // Print increasing numbers starting from 2
        for (int j = 2; j <= i; j++) {
            cout << j << " ";
        }

        // New line
        cout << endl;
    }

    return 0;
}

