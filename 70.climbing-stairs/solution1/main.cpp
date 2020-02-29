#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        std::vector<int> stairs;
        stairs.reserve(n);
        stairs.push_back(1);
        stairs.push_back(1);
        for (int i = 2; i < n+1; ++i) {
            stairs.push_back(stairs[i-1] + stairs[i-2]);
        }
        return stairs[n];
    }
};

int main() {
	Solution s;
    std::cout << s.climbStairs(10) << std::endl;

	std::cout << "OK!" << std::endl;
}

