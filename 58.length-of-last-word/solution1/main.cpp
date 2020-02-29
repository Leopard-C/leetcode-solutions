#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length();
        if (len == 0)
            return 0;

        // "trim" right blank space
        int i = len - 1;
        for (; i > -1; --i) {
            if (s[i] != ' ')
                break;
        }
        if (i == -1)
            return 0;

        for (int j = i; j > -1; --j) {
            if (s[j] == ' ') {
                return i - j;
            }
        }
        return i + 1;
    }
};

int main() {
	Solution s;

	std::cout << "OK!" << std::endl;
}

