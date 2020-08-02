#include <algorithm>
#include <iostream>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        for (int i = 0; i < 32; ++i) {
            count += ((n >> (31 - i) & 1) == 1);
        }
        return count;
    }
};

int main() {
	Solution s;

	Log("OK!");
}

