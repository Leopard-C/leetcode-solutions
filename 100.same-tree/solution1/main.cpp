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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if ( p && q) {
            return p->val == q->val &&
                isSameTree(p->left, q->left) &&
                isSameTree(p->right, q->right);
        }
        else {
            return p == q;
        }
    }
};

int main() {
	Solution s;

	Log("OK!");
}

