#include <algorithm>
#include <iostream>
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
    bool isBalanced(TreeNode* root) {
        return height(root) >= 0;
    }

    int height(TreeNode* root) {
        if (!root)
            return 0;

        int lh = height(root->left);
        if (lh < 0)
            return lh;

        int rh = height(root->right);
        if (rh < 0)
            return rh;

        if (abs(lh - rh) < 2)
            return std::max(lh, rh) + 1;
        else
            return -1;
    }
};

int main() {
	Solution s;

	Log("OK!");
}

