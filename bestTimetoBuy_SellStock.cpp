#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int min(int a, int b) {
    return (a < b) ? a : b;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

int maxProfit(const vector<int>& prices) {
    int min_buy = INT_MAX;
    int max_profit = 0;

    for (int price : prices) {
        min_buy = min(min_buy, price);
        max_profit = max(max_profit, price - min_buy);
    }

    return max_profit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4}; // Sample input
    cout << "Maximum Profit: " << maxProfit(prices) << endl;
    return 0;
}

