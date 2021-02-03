#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    void backtrack(std::vector<int>& nums, int i, int rest, int& result) {
        if (i == nums.size()) {
            if (rest == 0) {
                result++;
            }
            return;
        }
        rest += nums[i];
        backtrack(nums, i + 1, rest, result);
        rest -= nums[i];

        rest -= nums[i];
        backtrack(nums, i + 1, rest, result);
        rest += nums[i];
    }

    int findTargetSumWays(vector<int>& nums, int S) {
        if (nums.empty()) {
            return 0;
        }
        int result = 0;
        backtrack(nums, 0, S, result);
        return result;
    }
};

int main() {
    std::vector<int> vec = {
        2,107,109,113,127,131,137,3,2,3,5,7,11,13,17,19,23,29,47,53
    };
	Solution s;
    Log(s.findTargetSumWays(vec, 2147483647));

	Log("OK!");
}

