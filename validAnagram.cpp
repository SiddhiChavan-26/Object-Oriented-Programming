#include <iostream>
#include <string>
#include <vector>

bool isAnagram(const std::string& s, const std::string& t) {
    if (s.length() != t.length()) {
        return false;
    }

    std::vector<int> count(256, 0); // ASCII character frequency

    for (size_t i = 0; i < s.length(); ++i) {
        ++count[static_cast<unsigned char>(s[i])];
        --count[static_cast<unsigned char>(t[i])];
    }

    for (int c : count) {
        if (c != 0) return false;
    }

    return true;
}

int main() {
    std::string s = "listen";
    std::string t = "silent";

    if (isAnagram(s, t)) {
        std::cout << "Strings are anagrams." << std::endl;
    } else {
        std::cout << "Strings are not anagrams." << std::endl;
    }

    return 0;
}

