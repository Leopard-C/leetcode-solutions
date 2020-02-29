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
    bool isSymmetric(TreeNode* root) {
        return isMirror(root, root); 
    }

    bool isMirror(TreeNode* tn1, TreeNode* tn2) {
        if (tn1 == NULL && tn2 == NULL)
            return true;
        if (tn1 == NULL || tn2 == NULL)
            return false;

        return tn1->val == tn2->val &&
            isMirror(tn1->left, tn2->right) &&
            isMirror(tn1->right, tn2->left);
    }
};

int main() {
	Solution s;

	Log("OK!");
}

