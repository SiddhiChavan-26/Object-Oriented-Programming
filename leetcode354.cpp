#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Comparison function for sorting envelopes
bool compare(const vector<int>& a, const vector<int>& b) {
    if (a[0] == b[0])
        return a[1] > b[1]; // Descending height if width is same
    return a[0] < b[0];     // Ascending width
}

// Binary Search helper for LIS
int binarySearch(vector<int>& dp, int target) {
    int left = 0, right = dp.size();
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (dp[mid] < target)
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}

// Main logic to find max envelopes that can be nested
int maxEnvelopes(vector<vector<int>>& envelopes) {
    if (envelopes.empty()) return 0;

    // Sort envelopes by width ascending, height descending
    sort(envelopes.begin(), envelopes.end(), compare);

    vector<int> dp;
    for (auto& env : envelopes) {
        int height = env[1];
        int idx = binarySearch(dp, height);
        if (idx == dp.size())
            dp.push_back(height);
        else
            dp[idx] = height;
    }
    return dp.size();
}

// Example main function
int main() {
    int n;
    cout << "Enter number of envelopes: ";
    cin >> n;

    vector<vector<int>> envelopes(n, vector<int>(2));
    cout << "Enter width and height of each envelope:\n";
    for (int i = 0; i < n; ++i) {
        cin >> envelopes[i][0] >> envelopes[i][1];
    }

    int result = maxEnvelopes(envelopes);
    cout << "Maximum number of envelopes you can Russian doll: " << result << endl;

    return 0;
}

