#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int len1 = haystack.length();
        int len2 = needle.length();
        if (len2 == 0)
            return 0;

        for (int i = 0, stop = len1 - len2 + 1; i < stop; ++i) {
            int j = 0;
            for (; j < len2; ++j) {
                if (haystack[i+j] != needle[j])
                    break;
            }
            if (j == len2)
                return i;
        }
        return -1;
    }
};

int main() {
	Solution s;

	std::cout << "OK!" << std::endl;
}

