#include <algorithm>
#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if (s.empty())
            return true;
        if (s.length() % 2 == 1)
            return false;

        std::stack<char> stk;
        for (auto ch : s) {
            if (ch == '(' || ch == '[' || ch == '{')
                stk.push(ch);
            else {
                if (stk.empty())
                    return false;
                if (ch == ')' && stk.top() != '(' ||
                    ch == ']' && stk.top() != '[' ||
                    ch == '}' && stk.top() != '{')
                {
                    return false;
                }
                stk.pop();
            }
        }
       
        return stk.empty();
    }
};

int main() {
	Solution s;

	std::cout << "OK!" << std::endl;
}

