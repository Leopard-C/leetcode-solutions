#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        if (len < 2)
            return 0;

        int max_profit = 0;

        for (int i = 0; i < len - 1; ++i) {
            int buyingPrice = prices[i];
            auto iter = std::max_element(prices.begin() + i + 1, prices.end());
            max_profit = std::max(*iter - buyingPrice, max_profit);
        }

        return max_profit;
    }
};

int main() {
	Solution s;

	Log("OK!");
}

