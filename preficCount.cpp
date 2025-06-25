#include <iostream>
#include <vector>
#include <string>

int prefixCount(std::vector<std::string>& words, const std::string& pref) {
    int len = pref.length();
    int count = 0;

    for (const std::string& word : words) {
        int j = 0;
        while (j < len && j < word.length()) {
            if (pref[j] != word[j]) {
                break;
            }
            j++;
        }

        if (j == len) {
            count++;
        }
    }

    return count;
}

int main() {
    std::vector<std::string> words = {"apple", "app", "banana", "application"};
    std::string prefix = "app";

    int result = prefixCount(words, prefix);
    std::cout << "Words starting with prefix \"" << prefix << "\": " << result << std::endl;

    return 0;
}

