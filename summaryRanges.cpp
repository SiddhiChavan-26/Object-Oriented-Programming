#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> summaryRanges(vector<int>& nums) {
    vector<string> result;
    
    int i = 0;
    int n = nums.size();
    
    while (i < n) {
        int start = nums[i];
        
        // Move forward while the next number is consecutive
        while (i + 1 < n && nums[i + 1] == nums[i] + 1) {
            i++;
        }
        
        int end = nums[i];
        
        if (start == end) {
            result.push_back(to_string(start));
        } else {
            result.push_back(to_string(start) + "->" + to_string(end));
        }
        
        i++;
    }
    
    return result;
}

// Example usage:
int main() {
    vector<int> nums = {0, 1, 2, 4, 5, 7};
    vector<string> ranges = summaryRanges(nums);
    
    for (const string& range : ranges) {
        cout << range << endl;
    }

    return 0;
}

