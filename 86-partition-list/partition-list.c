/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* partition(struct ListNode* head, int x)
{
    struct ListNode smallDummy;
    struct ListNode largeDummy;

    struct ListNode *small = &smallDummy;
    struct ListNode *large = &largeDummy;

    small->next = NULL;
    large->next = NULL;

    while(head)
    {
        if(head->val < x)
        {
            small->next = head;
            small = small->next;
        }
        else
        {
            large->next = head;
            large = large->next;
        }

        head = head->next;
    }

    large->next = NULL;
    small->next = largeDummy.next;

    return smallDummy.next;
}