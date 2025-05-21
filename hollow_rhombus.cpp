#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows (height of rhombus): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int space = 1; space <= n - i; space++) {
            cout << " ";
        }

        // Print stars and hollow space
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}

