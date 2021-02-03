#include <algorithm>
#include <iostream>
#include <deque>
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
        if (root == nullptr) {
            return 0;
        }
        std::deque<TreeNode*> q;
        q.push_back(root);
        int depth = 1;

        while (!q.empty()) {
            int sz = q.size();
            for (int i = 0; i < sz; ++i) {
                TreeNode* cur = q.front();
                q.pop_front();
                if (cur->left == nullptr && cur->right == nullptr) {
                    return depth;
                }
                if (cur->left != nullptr) {
                    q.push_back(cur->left);
                }
                if (cur->right != nullptr) {
                    q.push_back(cur->right);
                }
            }
            ++depth;
        }

        return depth;
    }
};

int main() {
	Solution s;

	Log("OK!");
}

