/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) 
{
    struct ListNode* original = head;

    if(head==NULL)
    return NULL;

    while(head->next!=NULL && head!=NULL)
    {
        if(head->val == head->next->val)
        {
            struct ListNode* dupli = head->next;
            head->next = head->next->next;
            free(dupli);
        }
        else
        head=head->next;
    }
    return original;
    
}