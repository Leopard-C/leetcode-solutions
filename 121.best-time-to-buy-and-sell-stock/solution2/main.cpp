#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int min_price = INT_MAX;

        for (int i = 0, len = prices.size(); i < len; ++i) {
            min_price = std::min(min_price, prices[i]);
            max_profit = std::max(max_profit, prices[i] - min_price);
        }

        return max_profit;
    }
};

int main() {
	Solution s;

	Log("OK!");
}

