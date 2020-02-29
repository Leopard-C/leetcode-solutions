#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int lenA = a.length();
        int lenB = b.length();

        if (lenA < lenB) {
            return addBinary_(b, a);
        }
        else {
            return addBinary_(a, b);
        }
    }

private:
    // lenA >= lenB
    string addBinary_(const std::string& a, const std::string& b) {
        int lenA = a.length();
        int lenB = b.length();
        int i = lenA - 1;
        int j = lenB - 1;
        std::string ret;
        ret.reserve(lenA + 1);

        bool carry = false;
        for (; j > -1; --i, --j) {
            ret.push_back(add(a[i], b[j], carry));
        }
        for (; i > -1; --i) {
            if (!carry) {
                std::reverse(ret.begin(), ret.end());
                return a.substr(0, i + 1) + ret;
            }
            ret.push_back(add(a[i], '0', carry));
        }

        if (carry) {
            ret.push_back('1');
        }
        std::reverse(ret.begin(), ret.end());
        return ret;
    }

    char add(char m, char n, bool& carry) {
        // have carry bit
        if (carry) {
            if (m == '1') {
                //carry = true;
                return n;
            }
            else {
                if (n == '0') {
                    carry = false;
                    return '1';
                }
                else {
                    //carry = true;
                    return '0';
                }
            }
        }
        // no carry bit
        else {
            if (m == '1') {
                if (n == '1') {
                    carry = true;
                    return '0';
                }
                else {
                    //carry = false;
                    return '1';
                }
            }
            else {
                //carry = false;
                return n;
            }
        }
    }

};

int main() {
    Solution s;

    std::cout << "OK!" << std::endl;
}

