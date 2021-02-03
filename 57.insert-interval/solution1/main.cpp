#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        if (intervals.empty()) {
            return { newInterval };
        }
        int size = intervals.size();
        int min = newInterval[0];
        int max = newInterval[1];
        std::vector<std::vector<int>> ans;
        if (max < intervals[0][0]) {
            ans.push_back(newInterval);
            ans.insert(ans.end(), intervals.begin(), intervals.end());
            return ans;
        }
        else if (min > intervals.back()[1]) {
            ans.insert(ans.end(), intervals.begin(), intervals.end());
            ans.push_back(newInterval);
            return ans;
        }
        else if (min < intervals[0][0]) {
            int j = 0;
            while (j < size) {
                if (max < intervals[j][0]) {
                    ans.push_back({ min, max });
                    ans.insert(ans.end(), intervals.begin() + j, intervals.end());
                    return ans;
                }
                else if (max >= intervals[j][0] && max <= intervals[j][1]) {
                    ans.push_back({ min, intervals[j][1] });
                    ans.insert(ans.end(), intervals.begin() + j + 1, intervals.end());
                    return ans;
                }
                else {
                    ++j;
                }
            }
            ans.push_back({ min, max });
            return ans;
        }
        for (int i = 0; i < size; ++i) {
            if (min >= intervals[i][0] && min <= intervals[i][1]) {
                if (max <= intervals[i][1]) {
                    return intervals;
                }
                ans.insert(ans.end(), intervals.begin(), intervals.begin() + i);
                int j = i + 1;
                while (j < size) {
                    if (max < intervals[j][0]) {
                        ans.push_back({ intervals[i][0], max });
                        ans.insert(ans.end(), intervals.begin() + j, intervals.end());
                        return ans;
                    }
                    else if (max >= intervals[j][0] && max <= intervals[j][1]) {
                        ans.push_back({ intervals[i][0], intervals[j][1] });
                        ans.insert(ans.end(), intervals.begin() + j + 1, intervals.end());
                        return ans;
                    }
                    else {
                        ++j;
                    }
                }
                ans.push_back({ intervals[i][0], max });
                return ans;
            }
        }
        return ans;
    }
};

int main() {
	Solution s;

	Log("OK!");
}

