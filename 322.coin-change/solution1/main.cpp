#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    int dp(std::vector<int>& coins, std::map<int, int>& memo, int amount) {
        if (amount < 0)
            return -1;
        if (amount == 0)
            return 0;
        auto findIt = memo.find(amount);
        if (findIt != memo.end()) {
            return findIt->second;
        }
        int res = INT_MAX;
        for (int coin : coins) {
            int sub = dp(coins, memo, amount - coin);
            if (sub == -1)
                continue;
            res = std::min(res, sub + 1);
        }
        memo.insert(amount, res == INT_MAX ? -1 : res);
        return memo[amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        std::map<int, int> memo;
        return dp(coins, memo, amount);
    }
};

int main() {
	Solution s;

	Log("OK!");
}

