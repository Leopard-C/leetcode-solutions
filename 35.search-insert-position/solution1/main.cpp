#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();
        for (int i = 0; i < size; ++i) {
            if (target <= nums[i]) {
                return i;
            }
        }
        return size;
    }
};

int main() {
	Solution s;

	std::cout << "OK!" << std::endl;
}

