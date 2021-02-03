#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <climits>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        std::unordered_map<char, int> need, window; 
        for (char c : s1) {
            need[c]++;
        }

        int left = 0, right = 0;
        int valid = 0;
        while (right < s2.length()) {
            char c = s2[right];
            right++;
            if (need.count(c)) {
                window[c]++;
                if (window[c] == need[c]) {
                    valid++;
                }
            }
            while (right - left >= s1.size()) {
                if (valid == need.size()) {
                    return true;
                }
                char d = s2[left];
                left++;
                if (need.count(d)) {
                    if (window[d] == need[d]) {
                        valid--;
                    }
                    window[d]--;
                }
            }
        }
        return false;
    }
};

int main() {
	Solution s;

	Log("OK!");
}

