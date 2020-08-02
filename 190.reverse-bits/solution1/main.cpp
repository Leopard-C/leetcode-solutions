#include <algorithm>
#include <iostream>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ret = 0;
        for (int i = 0; i < 32; ++i) {
            ret |= (((n >> (31 - i)) & 0x01) << i);
        }
        return ret;
    }
};

int main() {
	Solution s;

	Log("OK!");
}

