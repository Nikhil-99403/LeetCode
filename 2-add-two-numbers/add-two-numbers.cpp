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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* neww=nullptr;
        ListNode* tail=nullptr;
        int carry=0;
        bool isT=true;
        while(temp1!=nullptr || temp2!=nullptr){
            int sum=0;
            if(temp1!=nullptr){
                sum+=temp1->val;
            }
            if(temp2!=nullptr){
                sum+=temp2->val;
            }
            if(isT==false){
                sum+=carry;
                isT=true;
            }
            if(sum>9){
                carry=sum/10;
                sum=sum%10;
                isT=false;
            }
            ListNode* node=new ListNode(sum);

            if(temp1 != nullptr){temp1 = temp1->next;}
            if(temp2 != nullptr){temp2 = temp2->next;}
              
            if(neww==nullptr){
                neww=node;
                tail=node;
            }
            else{
                tail->next=node;
                tail=node;
            }
            if(isT==false){
                ListNode* node = new ListNode(carry);
                tail->next = node;
            }

        }     
        return neww; 
    }
};