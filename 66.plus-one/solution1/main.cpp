#include <algorithm>
#include <iostream>

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        int carry = 1;
        for (int i = len - 1; i > 0; --i) {
            if (digits[i] + carry == 10) {
                digits[i] = 0;
                carry = 1;
            }
            else {
                digits[i] += 1;
                return digits;
            }
        }
        if (digits[0] == 9) {
            digits[0] = 0;
            digits.insert(digits.begin(), 1);
        }
        else {
            digits[0] += 1;
        }
        return digits;
    }
};

int main() {
	Solution s;

	std::cout << "OK!" << std::endl;
}

