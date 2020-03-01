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
    int longestUnivaluePath(TreeNode* root) {
        help(root);
        return longestPath;
    }

    int help(TreeNode* root) {
        if (!root)
            return 0;

        int lenL = help(root->left);
        int lenR = help(root->right);
        
        int sameL = 0;
        int sameR = 0;
        if (root->left && root->left->val == root->val)
            sameL = lenL + 1;
        if (root->right && root->right->val == root->val)
            sameR = lenR + 1;

        longestPath = std::max(longestPath, sameL + sameR);
        return std::max(sameL, sameR);
    }
private:
    int longestPath;
};

int main() {
	Solution s;

	Log("OK!");
}

