#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = INT_MIN;
        int count = nums.size();
        for (int i = 0; i < count; ++i) {
            int sum = 0;
            for (int j = i; j < count; ++j) {
                sum += nums[j];
                if (sum > max)
                    max = sum;
            }
        }

        return max;
    }
};

int main() {
	Solution s;

	std::cout << "OK!" << std::endl;
}

