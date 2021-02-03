#include <algorithm>
#include <iostream>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0)
            return 1.0;
        if (n == 1)
            return x;
        if (n == -1)
            return 1.0 / x;
        double half = myPow(x, n / 2);
        double remain = myPow(x, n % 2);
        return half * half * remain;
    }
};

int main() {
	Solution s;

	Log("OK!");
}

