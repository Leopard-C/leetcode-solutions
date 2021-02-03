#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_map<char, int> window;

        int left = 0, right = 0;
        int len = 0;
        
        while (right < s.size()) {
            char c = s[right];
            right++;
            window[c]++;
            while (window[c] > 1) {
                char d = s[left];
                left++;
                window[d]--;
            }
            len = std::max(len, right - left);
        }

        return len;
    }
};

int main() {
	Solution s;
    Log(s.lengthOfLongestSubstring(" "));

	Log("OK!");
}

