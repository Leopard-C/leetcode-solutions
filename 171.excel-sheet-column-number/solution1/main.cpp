#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    int titleToNumber(string s) {
        int result = 0;
        for (auto ch : s) {
            result = result * 26 + (ch - 'A' + 1);
        }
        return result;
    }
};

int main() {
	Solution s;

	Log("OK!");
}

