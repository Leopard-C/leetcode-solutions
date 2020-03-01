#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if (numRows == 0)
            return vector<vector<int>>();

        vector<vector<int>> ret;
        ret.reserve(numRows);
        ret.push_back({1});

        for (int i = 1; i < numRows; ++i) {
            auto& lastrow = ret.back();
            vector<int> newrow;
            newrow.reserve(i);
            newrow.push_back(1);
            for (int j = 0, end = lastrow.size() - 1; j < end; ++j) {
                newrow.push_back(lastrow[j] + lastrow[j+1]);
            }
            newrow.push_back(lastrow.back());
            ret.emplace_back(newrow);
        }

        return ret;
    }
};

int main() {
	Solution s;

	Log("OK!");
}

