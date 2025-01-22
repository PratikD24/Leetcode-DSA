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
    int leng(ListNode* head)
    {
        ListNode* curr = head;
        int l=0;
        while(curr!=NULL)
        {
            curr=curr->next;
            l++;
        }
        return l;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        
        if(head->next == NULL)
        {
            return NULL;
        }
        
        int len=leng(head);

        if(len == n)
        {
            return head->next;
        }
        int it = len-n;
        ListNode* oneback=head;
        int i=1;
        while(i<it)
        {
            oneback=oneback->next;
            i++;
        }

       oneback->next=oneback->next->next;

        return head;
    }
};