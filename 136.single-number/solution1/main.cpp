#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ret = 0;
        for (auto& num : nums)
            ret ^= num;
        return ret; 
    }
};

int main() {
	Solution s;

	Log("OK!");
}

