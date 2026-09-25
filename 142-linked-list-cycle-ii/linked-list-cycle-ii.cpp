/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* sl=head;
        ListNode* fp=head;
        while(fp!=nullptr && fp->next!=nullptr){
            sl=sl->next;
            fp=fp->next->next;
            if(sl==fp){
                sl=head;
                while(sl!=fp){
                    sl=sl->next;
                    fp=fp->next;
                }
                return sl;
            }
           
        }
        return nullptr;
    }
};