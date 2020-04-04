#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define Log(x) cout << (x) << endl

class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int count = 0, candinate = 0; 
       for (auto num : nums) {
           if (count == 0)
               candinate = num;
           if (num == candinate)
               count++;
           else
               count--;
       }
       return candinate;
    }
};

int main() {
	Solution s;

	Log("OK!");
}

