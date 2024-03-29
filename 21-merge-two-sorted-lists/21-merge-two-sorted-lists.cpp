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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL; //Head of the result list
        ListNode* p= NULL;

        if(l1==NULL){
            return l2;
        }
        if(l2==NULL){
            return l1;
        }

        if(l2->val > l1->val){ //Choose head which is smaller of the two lists
            head = p = l1;
            l1 = l1->next;
        }
        else{
            head = p = l2;
            l2 = l2->next;
        }

        while(l1 != NULL && l2 != NULL){
           if(l1->val > l2->val){
               p->next = l2;
               p = l2;
               l2 = l2->next;
           } 
           else{
               p->next = l1;
               p = l1;
               l1 = l1->next;
           }
        }

        if(l1 != NULL){
            p->next = l1;
        }

        if(l2 != NULL){
            p->next = l2;
        }


        return head;
    }
};