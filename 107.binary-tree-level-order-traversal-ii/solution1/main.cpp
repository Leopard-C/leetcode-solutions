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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        std::vector<std::vector<int>> retVec;
        if (!root)
            return retVec;
        
        std::vector<TreeNode*> nodesVec1;
        nodesVec1.push_back(root);

        while (!nodesVec1.empty()) {
            std::vector<int> tmpVec;
            std::vector<TreeNode*> nodesVec2;
            for (auto& node : nodesVec1) {
                tmpVec.push_back(node->val);
                if (node->left)
                    nodesVec2.push_back(node->left);
                if (node->right)
                    nodesVec2.push_back(node->right);
            }
            retVec.push_back(tmpVec);
            nodesVec1 = std::vector<TreeNode*>();
            std::swap(nodesVec1, nodesVec2);
        }

        std::reverse(retVec.begin(), retVec.end());
        return retVec;
    }
};

int main() {
	Solution s;

	Log("OK!");
}

