#include <algorithm>
#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <climits>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    string minWindow(string s, string t) {
        std::unordered_map<char, int> need, window;
        for (char c : t) {
            need[c]++;
        }

        int left = 0, right = 0;
        int valid = 0;
        int sLen = s.length();
        int start = 0, len = INT_MAX;
        while (right < sLen) {
            char c = s[right];
            right++;
            if (need.count(c)) {
                window[c]++;
                if (window[c] == need[c]) {
                    valid++;
                }
            }

            while (valid == need.size()) {
                if (right - left < len) {
                    start = left;
                    len = right - left;
                }
                char d = s[left];
                left++;
                if (need.count(d)) {
                    if (window[d] == need[d]) {
                        valid--;
                    }
                    window[d]--;
                }
            }
        }
        return len == INT_MAX ? "" : s.substr(start, len);
    }
};

int main() {
    Solution s;
    std::string x = s.minWindow("abcdefgghxijk", "ghi");
    Log(x);

	Log("OK!");
}

