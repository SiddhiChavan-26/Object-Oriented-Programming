#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows (height of rhombus): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print stars
        for (int k = 1; k <= n; k++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

