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
            return nullptr;

        bool flag = false;
        ListNode* curr = head;
        ListNode* last = head;
        ListNode* prev = head;
        int val = curr->val;

        while (1) {
            if (curr->next) {
                prev = curr;
                curr = curr->next;
                if (curr->val != val) {
                    if (flag) {
                        if (last == head) {
                            prev = last = head = curr;
                        }
                        else {
                            last->next = curr;
                        }
                        flag = false;
                    }
                    else {
                        last = prev;
                    }
                    val = curr->val;
                }
                else {
                    flag = true;
                }
            }
            else {
                if (flag)
                    last->next = nullptr;
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

