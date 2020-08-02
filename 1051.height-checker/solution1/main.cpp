#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        auto heightsSorted = heights;
        std::sort(heightsSorted.begin(), heightsSorted.end());
        size_t size = heights.size();
        int count = 0;
        for (size_t i = 0; i < size; ++i) {
            if (heightsSorted[i] != heights[i]) {
                ++count;
            }
        }
        return count;
    }
};

int main() {
	Solution s;

	Log("OK!");
}

