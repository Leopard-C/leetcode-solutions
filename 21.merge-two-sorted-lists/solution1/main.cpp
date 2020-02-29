#include <algorithm>
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == nullptr)
            return l2;
        if (l2 == nullptr)
            return l1;

        ListNode* ptr1 = l1;
        ListNode* ptr2 = l2;
        ListNode *resultNode, *currNode;
        if (l1->val < l2->val) {
            resultNode = currNode = l1;
            ptr1 = ptr1->next;
        }
        else {
            resultNode = currNode = l2;
            ptr2 = ptr2->next;
        }

        while (1) {
            if (ptr1 == nullptr) {
                currNode->next = ptr2;
                break;
            }
            if (ptr2 == nullptr) {
                currNode->next = ptr1;
                break;
            }

            if (ptr1->val < ptr2->val) {
                currNode->next = ptr1;
                currNode = ptr1;
                ptr1 = ptr1->next;
            }
            else {
                currNode->next = ptr2;
                currNode = ptr2;
                ptr2 = ptr2->next;
            }
        }
        
        return resultNode;
    }
};

int main() {
	Solution s;

	std::cout << "OK!" << std::endl;
}

