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
        if (!head) {
            return nullptr;
        }

        ListNode* curr = head;
        ListNode* start = head;
        int val = curr->val;

        while (1) {
            if (curr->next) {
                curr = curr->next;
                if (curr->val != val) {
                    start->next = curr;
                    start = curr;
                    val = start->val;
                }
            }
            else {
                if (curr != start) {
                    start->next = nullptr;
                }
                break;
            }
        }

        return head;
    }
};

int main() {
	Solution s;

	Log("OK!");
}

