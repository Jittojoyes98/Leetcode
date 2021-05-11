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
    ListNode* partition(ListNode* head, int x) {
        
        ListNode* before_head=new ListNode(0);
        ListNode* before=before_head;
        ListNode* after_head=new ListNode(0);
        ListNode* after=after_head;
        
        int countAfter=0,countBefore=0;
        
        ListNode* itr=head;
        while(itr!=NULL){
            // cout<<itr->val<<endl;
            if(itr->val>=x){
                countAfter++;
                after->next=itr;
                after=after->next;
            }else{
                countBefore++;
                before->next=itr;
                before=before->next;
            }
            itr=itr->next;
        }
        // return head;
        
        if(countAfter==0 or countBefore==0){
            return head;
        }
        before->next=after_head->next;
        after->next=NULL;
        
        return before_head->next;
        
    }
};