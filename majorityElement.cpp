class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        int majority = nums.size() / 2;

        for (int num : nums) {
            freq[num]++;
            if (freq[num] > majority)
                return num;
        }

        return -1; // theoretically won't happen as per problem statement
    }
};

