#include <iostream>
using namespace std;

void reverseString(char* s, int sSize) {
    int start = 0;
    int end = sSize - 1;
    char temp;

    while (start < end) {
        temp = s[end];
        s[end] = s[start];
        s[start] = temp;

        start++;
        end--;
    }
}

int main() {
    char str[] = "hello";
    int size = sizeof(str) / sizeof(str[0]) - 1; // exclude null terminator

    reverseString(str, size);

    cout << "Reversed string: " << str << endl;

    return 0;
}

