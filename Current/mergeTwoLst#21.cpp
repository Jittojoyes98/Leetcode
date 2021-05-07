/**
 * 
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
//         first create a dummy node
        ListNode dummy(-101);
//         now make a pointer point to the node so that it can 
//         acess the next of the dummy node
        ListNode* store=&dummy;
        ListNode* cur=&dummy;
        if( l1==NULL and  l2==NULL)
            return NULL;
        if(l1==NULL){
            return l2;
        }
        if(l2==NULL){
            return l1;
        }
        ListNode* itrl1=l1;
        ListNode* itrl2=l2;
        while(itrl1!=NULL and itrl2!=NULL){
            if(itrl1->val<itrl2->val){
                cur->next=itrl1;
//                 now just assign the next of cur as our first node,
//                 the idea is just rewiring stuff (no extra spaces)
                itrl1=itrl1->next;
            }
            else{
                cur->next=itrl2;
                itrl2=itrl2->next;
            }
            cur=cur->next;
        }
        if(itrl1==NULL){
            cur->next=itrl2;
        }
        else{
            cur->next=itrl1;
        }
        
        return (store->next);
    }
};