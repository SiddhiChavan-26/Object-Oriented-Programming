#include <iostream>
#include <sstream>
#include <unordered_map>
#include <vector>

using namespace std;

bool wordPattern(string pattern, string s) {
    unordered_map<char, string> charToWord;
    unordered_map<string, char> wordToChar;
    vector<string> words;
    
    // Split the string s into words using istringstream
    istringstream iss(s);
    string word;
    while (iss >> word) {
        words.push_back(word);
    }

    // If number of words and pattern length don't match
    if (words.size() != pattern.size()) {
        return false;
    }

    for (int i = 0; i < pattern.size(); ++i) {
        char c = pattern[i];
        const string& w = words[i];

        // Check char-to-word mapping
        if (charToWord.count(c)) {
            if (charToWord[c] != w) return false;
        } else {
            charToWord[c] = w;
        }

        // Check word-to-char mapping
        if (wordToChar.count(w)) {
            if (wordToChar[w] != c) return false;
        } else {
            wordToChar[w] = c;
        }
    }

    return true;
}

int main() {
    string pattern = "abba";
    string s = "dog cat cat dog";

    if (wordPattern(pattern, s)) {
        cout << "Pattern matches\n";
    } else {
        cout << "Pattern does not match\n";
    }

    return 0;
}

