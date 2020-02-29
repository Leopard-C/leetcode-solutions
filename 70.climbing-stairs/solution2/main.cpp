#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        int* stairs = new int[n];
        stairs[1] = stairs[0] = 1;
        for (int i = 0; i < n + 1; ++i) {
            stairs[i] = stairs[i-1] + stairs[i-2];
        }
        return stairs[n];
    }
};

int main() {
	Solution s;

	std::cout << "OK!" << std::endl;
}

