#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    bool isPalindrome(string s) {
        if (s.empty())
            return true;

        int l = 0;
        int r = s.length() - 1;

        while (l < r) {
            while (!std::isalnum(s[l]) && l < r)
                ++l;
            while (!std::isalnum(s[r]) && l < r)
                --r;

            if (std::toupper(s[l]) != std::toupper(s[r])) {
                return false;
            }

            ++l;
            --r;
        }

        return true;
    }
};

int main() {
	Solution s;
    Log(s.isPalindrome("A man, a plan, a canal: Panama"));

	Log("OK!");
}

