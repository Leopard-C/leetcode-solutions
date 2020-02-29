#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        if (len < 2)
            return len;

        int currIdx = 0;
        int currNum = nums[currIdx];

        for (int i = 1; i < len; ++i) {
            if (nums[i] != currNum) {
                currIdx++; 
                currNum = nums[currIdx] = nums[i];
            }
        }

        return currIdx + 1;
    }
};

int main() {
	Solution s;

	std::cout << "OK!" << std::endl;
}

