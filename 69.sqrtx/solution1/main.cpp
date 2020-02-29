#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        long r = x;
        while (r*r > x) {
            r = (r + x/r) / 2;
        }
        return r;
    }
};

int main() {
	Solution s;

	std::cout << "OK!" << std::endl;
}

