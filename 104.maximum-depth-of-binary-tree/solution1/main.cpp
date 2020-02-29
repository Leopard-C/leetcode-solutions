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
    int maxDepth(TreeNode* root) {
        if (!root)
            return 0;

        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);

        return (leftDepth > rightDepth ? leftDepth : rightDepth) + 1;
    }
};

int main() {
	Solution s;

	Log("OK!");
}

