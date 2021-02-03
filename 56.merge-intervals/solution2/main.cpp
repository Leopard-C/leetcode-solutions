#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        std::sort(intervals.begin(), intervals.end());
        std::vector<std::vector<int>> ans;
        int size = intervals.size();
        for (int i = 0; i < size; ) {
            int t = intervals[i][1];
            int j = i + 1;
            while (j < size && intervals[j][0] <= t) {
                t = std::max(t, intervals[j][1]);
                ++j;
            }
            ans.push_back({ intervals[i][0], t });
            i = j;
        }
        return ans;
    }
};

int main() {
	Solution s;

	Log("OK!");
}

