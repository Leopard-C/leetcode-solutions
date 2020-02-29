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
    int minDepth(TreeNode* root) {
        if (!root)
            return 0;

        if (!root->left && !root->right)
            return 1;

        int ld = minDepth(root->left);
        int rd = minDepth(root->right);

        if (!root->left || !root->right)
            return ld + rd + 1;

        return (ld < rd ? ld : rd) + 1;
    }
};

int main() {
	Solution s;

	Log("OK!");
}

