#include <algorithm>
#include <iostream>
#include <list>
using namespace std;

#define Log(x) cout << (x) << endl

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head)
            return NULL;

        ListNode* low = head;
        ListNode* fast = head;
        bool flag = false;
        int val = fast->val;

        while (1) {
            if (fast->next == NULL) {
                if (flag) {
                    if (low == head && (low->next == nullptr || low->val == low->next->val))
                        head = NULL;
                    else
                        low->next = NULL;
                }
                break;
            }

            fast = fast->next;
            if (fast->val == val) {
                flag = true;
            }
            else {
                val = fast->val;
                if (flag) {
                    flag = false;
                    if (low == head && low->val == low->next->val)
                        head = low = fast;
                    else
                        low->next = fast;
                }
                else {
                    if (low->next != fast) {
                        low = low->next;
                    }
                }
            }
        } // end while (1)

        return head;
    }
};

int main() {
    Solution s;

	Log("OK!");
}

