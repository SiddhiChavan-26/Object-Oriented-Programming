#include <iostream>
using namespace std;

int mySqrt(int x) {
    if (x == 0 || x == 1) {
        return x;
    }

    int low = 0, high = x, mid, ans = 0;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if ((long long)mid * mid == x) {
            return mid;
        }
        else if ((long long)mid * mid < x) {
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return ans;
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    int result = mySqrt(x);
    cout << "Square root (integer part) of " << x << " is " << result << endl;

    return 0;
}

