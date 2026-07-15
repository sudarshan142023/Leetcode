/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) 
{
    if(head==NULL || head->next==NULL ||  head->next->next==NULL)
    return NULL; 

    struct ListNode* fast = head;
    struct ListNode* slow = head;

    while(fast != NULL && fast->next != NULL)
    {
        fast=fast->next->next;
        slow=slow->next;

     
         if(fast==slow)
        {
            slow=head;

            while(fast!=slow)
            {
                fast=fast->next;
                slow=slow->next;
            }
            return slow;
        }
        
    }
    


    return NULL;   


    
}