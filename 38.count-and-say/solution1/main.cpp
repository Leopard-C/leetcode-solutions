#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        std::string s1 = "1", s2 = "";
        char itoa;
        if (n == 0)
            return "";
        if (n == 1)
            return s1;

        for (int i = 1; i < n; ++i) {
            int count = 0;
            int len = s1.length();
            char c = s1[0];
            for (int j = 0; j < len; ++j) {
                if (s1[j] == c) {
                    count++;
                }
                else {
                    itoa = count + '0';
                    s2 += itoa;
                    s2 += c;
                    c = s1[j];
                    count = 1;
                }

                if (j == len - 1) {
                    itoa = count + '0';
                    s2 += itoa;
                    s2 += c;
                }
            } // end for j

            s1 = s2;
            s2 = "";
        } // end for i

        return s1;
    }
};

int main() {
	Solution s;

	std::cout << "OK!" << std::endl;
}

