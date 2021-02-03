#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    int helper(std::vector<int>& memo, int n) {
        if (n == 1 || n == 2) {
            return 1;
        }
        if (memo[n] != 0) {
            return memo[n];
        }
        else {
            memo[n] = helper(memo, n - 1) + helper(memo, n - 2);
            return memo[n];
        }
    }

    int fib(int N) {
        if (N < 1)
            return 0;
        std::vector<int> memo(N+1, 0);
        return helper(memo, N);
    }
};

int main() {
	Solution s;

	Log("OK!");
}

