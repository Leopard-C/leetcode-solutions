#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto iter = std::unique(nums.begin(), nums.end());
        return iter - nums.begin();
    }
};

int main() {
	Solution s;

	std::cout << "OK!" << std::endl;
}

