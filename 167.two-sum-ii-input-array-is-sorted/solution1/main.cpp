#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for (int i = 0, size = numbers.size(); i < size; ++i) {
            if (numbers[i] > target)
                continue;
            auto iter = std::find(numbers.begin() + i + 1, numbers.end(), target - numbers[i]);
            if (iter != numbers.end())
                return { i, iter - numbers.begin() };
        }

        return vector<int>();
    }


private:
    int index1 = 0;
    int index2 = 0;
};

int main() {
	Solution s;

	Log("OK!");
}

