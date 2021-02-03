#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    void backtrack(std::vector<int>& nums, std::vector<int>& track, std::vector<std::vector<int>>& res) {
        int size = nums.size();
        if (track.size() == size) {
            res.push_back(track);
            return;
        }

        for (int i = 0; i < size; ++i) {
            if (std::find(track.begin(), track.end(), nums[i]) != track.end()) {
                continue;
            }
            track.push_back(nums[i]);
            backtrack(nums, track, res);
            track.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        std::vector<std::vector<int>> res; 
        std::vector<int> track;
        backtrack(nums, track, res);
        return res;
    }
};

int main() {
	Solution s;

	Log("OK!");
}

