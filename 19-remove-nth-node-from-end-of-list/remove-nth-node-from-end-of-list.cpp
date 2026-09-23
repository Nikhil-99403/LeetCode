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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int cnt=0;
        while(temp){
            cnt++;
            temp=temp->next;
        }
        if (n == cnt) {
            return head->next;
        }
        int a=cnt-n;
        int ct=1;
        ListNode* neww=head;
        while(neww){
            if(ct==a){
                neww->next=neww->next->next;
                break;
            }
             neww=neww->next;
            ct++;
           
        }
        return head;
        
    }
};