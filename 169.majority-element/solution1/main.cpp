#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::map<int, int> countMap;
        for (auto num : nums) {
            auto iter = countMap.find(num);
            if (iter == countMap.end())
                countMap.emplace(num, 1);
            else
                iter->second++;
        }
        int max_count = INT_MIN;
        int number = 0;
        for (auto& ele : countMap) {
            if (ele.second > max_count) {
                number = ele.first;
                max_count = ele.second;
            }
        }
        return number;
    }
};

int main() {
	Solution s;

	Log("OK!");
}

