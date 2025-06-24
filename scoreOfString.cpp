#include <iostream>
#include <cmath>     // for abs
#include <cstring>   // for strlen
using namespace std;

int scoreOfString(const char* s) {
    int score = 0;
    for (int i = 1; s[i] != '\0'; i++) {
        score += abs(s[i] - s[i - 1]);
    }
    return score;
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;

    int score = scoreOfString(str);
    cout << "Score of the string: " << score << endl;

    return 0;
}

