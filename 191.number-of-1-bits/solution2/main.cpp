#include <algorithm>
#include <iostream>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    int hammingWeight(uint32_t n) {
       int ct = 0;
       while (n) {
           ++ct;
           n &= (n - 1);
       }
       return ct;
    }
};

int main() {
	Solution s;

	Log("OK!");
}

