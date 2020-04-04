#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    string convertToTitle(int n) {
        string result;
        while (n > 0) {
            n -= 1;
            result.push_back('A' + n % 26);
            n /= 26;
        }
        std::reverse(result.begin(), result.end());
        return result;
    }
};

int main() {
	Solution s;

	Log("OK!");
}

