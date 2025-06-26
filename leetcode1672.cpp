#include <iostream>
#include <vector>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    int wealth = 0;

    for (int i = 0; i < accounts.size(); i++) {
        int maxWealth = 0;

        for (int j = 0; j < accounts[i].size(); j++) {
            maxWealth += accounts[i][j];
        }

        if (wealth < maxWealth) {
            wealth = maxWealth;
        }
    }

    return wealth;
}

int main() {
    vector<vector<int>> accounts = {
        {1, 2, 3},
        {3, 2, 1},
        {4, 5, 1}
    };

    cout << "Maximum Wealth: " << maximumWealth(accounts) << endl;

    return 0;
}

