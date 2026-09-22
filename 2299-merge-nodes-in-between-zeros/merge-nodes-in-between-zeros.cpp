/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
            ListNode* temp = head;
            ListNode* n = nullptr;
            ListNode* tail = nullptr;
            int sum = 0;

            while (temp) {
                if (temp->val == 0) {
                    temp = temp->next;
                    sum = 0;

                    while (temp && temp->val != 0) {
                        sum += temp->val;
                        temp = temp->next;
                    }

                    if (temp) {  
                        ListNode* newNode = new ListNode(sum);

                        if (n == nullptr) {
                            n = newNode;
                            tail = newNode;
                        } else {
                            tail->next = newNode;
                            tail = newNode;
                        }
                    }
                }
            }

            return n;
            }
};