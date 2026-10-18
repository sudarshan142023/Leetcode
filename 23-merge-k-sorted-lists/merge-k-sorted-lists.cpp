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

    ListNode* merge(ListNode* res ,ListNode* head)
    {
        while(head!=NULL)
        {
            ListNode* temp = head;
            head=head->next;
        
            if(res==NULL || temp->val<res->val)
            {
                temp->next=res;
                res=temp;               
            }
            else
            {
                ListNode* pre=res; 
                  
                    while(pre->next!=NULL && pre->next->val<=temp->val)
                    {  
                        pre=pre->next;
                    }

                    temp->next=pre->next;
                    pre->next = temp;
            }
            
        }
        return res;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        ListNode* res=NULL;

        for(auto head : lists)
        {
            res = merge(res,head);
        }

        return res;
    }
};