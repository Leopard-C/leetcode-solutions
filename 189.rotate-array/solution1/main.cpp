#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        auto mid = nums.begin() + k % nums.size();
        std::reverse(nums.begin(), nums.end());
        std::reverse(nums.begin(), mid);
        std::reverse(mid, nums.end());
    }
};

int main() {
	Solution s;

	Log("OK!");
}

