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
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode* sp = head;
        ListNode* fp = head->next;
        ListNode* temp = nullptr;
        ListNode* newHead = fp;
        ListNode* prev = nullptr;
        while (fp != nullptr) {
            temp = fp->next;
            fp->next = sp;
            sp->next = temp;
            if (prev != nullptr)
                prev->next = fp;

            prev = sp;
            sp = temp;
            if (sp == nullptr || sp->next == nullptr)
                break;

            fp = sp->next;
        }

        return newHead;
    }
};
