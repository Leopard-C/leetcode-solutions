#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        if (nums.empty()) {
            return 0;
        }
        return dp(nums, 0, S);
    }

    std::map<std::string, int> memo;
    int dp(std::vector<int>& nums, int i, long rest) {
        if (i == nums.size()) {
            return rest == 0;
        }
        std::string key = std::to_string(i) + ",";
        key += std::to_string(rest);
        if (memo.find(key) != memo.end()) {
            return memo[key];
        }
        int result = dp(nums, i + 1, rest - nums[i]) +
            dp(nums, i + 1, rest + nums[i]);
        memo.emplace(key, result);
        return result;
    }
};

int main() {
	Solution s;
    std::vector<int> nums = {
        2,107,109,113,127,131,137,3,2,3,5,7,11,13,17,19,23,29,47,53
    };
    Log(s.findTargetSumWays(nums, 2147483647));

	Log("OK!");
}

