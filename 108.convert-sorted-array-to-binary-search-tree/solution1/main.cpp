#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define Log(x) cout << (x) << endl

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.empty())
            return nullptr;

        int size = nums.size();
        TreeNode* bst = new TreeNode(nums[size / 2]);
        std::vector<int> left(nums.begin(), nums.begin() + size / 2);
        std::vector<int> right(nums.begin() + size / 2 + 1, nums.end());
        bst->left = sortedArrayToBST(left);
        bst->right = sortedArrayToBST(right);

        return bst;
    }
};

int main() {
	Solution s;

	Log("OK!");
}

