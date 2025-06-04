#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int numsSize = nums.size();
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] == 0) {
            for(int j = i + 1; j < numsSize; j++) {
                if(nums[j] != 0) {
                    swap(nums[i], nums[j]);
                    break;
                }
            }
        }
    }

    for(int i = 0; i < numsSize; i++) {
        cout << nums[i] << "\t";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);
    return 0;
}

