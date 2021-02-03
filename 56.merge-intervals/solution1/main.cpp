#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        std::vector<std::vector<int>> result(intervals);
        for (int i = 0; i < result.size(); ) {
            int min = result[i][0];
            int max = result[i][1];
            for (int j = i + 1; j < result.size(); ++j) {
                if (result[j][0] > max || result[j][1] < min) {
                    continue;
                }
                else {
                    result[i][0] = std::min(result[i][0], result[j][0]);
                    result[i][1] = std::max(result[i][1], result[j][1]);
                    result.erase(result.begin() + j);
                    break;
                }
            }
            ++i;
        }
        if (intervals.size() == result.size()) {
            return result;
        }
        else {
            return merge(result);
        }
    }
};

int main() {
	Solution s;

	Log("OK!");
}

