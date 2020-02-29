#include <algorithm>
#include <iostream>
#include <cmath>
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
        if (!root)
            return true;
        if (abs(depth(root->left) - depth(root->right)) > 1)
            return false;
        else
            return isBalanced(root->left) && isBalanced(root->right);
    }

    int depth(TreeNode* root) {
        if (!root)
            return 0;
        else
            return std::max(depth(root->left), depth(root->right)) + 1;
    }
};

int main() {
	Solution s;

	Log("OK!");
}

