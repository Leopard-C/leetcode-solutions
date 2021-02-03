#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        int sum = 0;
        for (int n : nums) {
            sum += n;
        }
        if (sum < S || (sum + S) % 2 == 1) {
            return 0;
        }
        return subset(nums, (sum + S) / 2);
    }

    int subset(std::vector<int>& nums, int t) {

    }
};

int main() {
	Solution s;

	Log("OK!");
}

