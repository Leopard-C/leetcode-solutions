#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        std::vector<int> result;
        result.reserve(rowIndex);
        for (int i = 0; i <= rowIndex; ++i) {
            result.push_back(1);
            for (int j = i - 1; j > 0; --j) {
                result[j] += result[j-1];
            }
        }
        return result;
    }
};

int main() {
	Solution s;

	Log("OK!");
}

