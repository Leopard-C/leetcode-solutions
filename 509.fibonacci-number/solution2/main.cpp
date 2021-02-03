#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    int fib(int N) {
        if (N < 1)
            return 0;
        if (N == 1 || N == 2)
            return 1;
        int prev = 1, curr = 1, tmp;
        for (int i = 3; i <= N; ++i) {
            tmp = prev + curr;
            prev = curr;
            curr = tmp;
        }
        return curr;
    }
};

int main() {
	Solution s;

	Log("OK!");
}

