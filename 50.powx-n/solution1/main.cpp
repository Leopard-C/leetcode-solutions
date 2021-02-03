#include <algorithm>
#include <iostream>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    double myPow(double x, int n) {
        double result = 1; 
        int N = abs(n);
        for (int i = 0; i < N; ++i) {
            result *= x;
        }
        return (n > 0) ? result : 1 / result;
    }
};

int main() {
	Solution s;

	Log("OK!");
}

