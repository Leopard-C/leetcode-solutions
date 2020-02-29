#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size();
        if (len == 0)
            return 0;
        if (len == 1) {
            if (nums[0] == val)
                return 0;
            else
                return 1;
        }

        int i = 0, j = len - 1;
        while (i <= j) {
            if (nums[i] == val) {
                while (nums[j] == val && j > i) {
                    --j;
                }
                if (nums[j] != val) {
                    nums[i] = nums[j];
                    --j;
                }
                else {
                    break;
                }
            }
            ++i;
        }

        return i;
    }
};

int main() {
	Solution s;

	std::cout << "OK!" << std::endl;
}

