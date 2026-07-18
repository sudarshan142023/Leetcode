/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int sl_sort( struct ListNode **head)
{
    if(*head==NULL ||  (*head)->next==NULL)
    {
        return 0;
    }
    
    
    struct ListNode* cur = *head;
    
    int count = 0;
    
    while(cur !=NULL)
    {
        count++;
        cur=cur->next;
    }
    
    for(int i=0; i<count-1; i++)
    {
        struct ListNode* prev = NULL;
        struct ListNode* cur = *head;
        
        while(cur != NULL && cur->next != NULL)
            {
               struct ListNode* fast = cur->next;
               
               if(cur->val > fast->val)
               {
                   if(prev==NULL)
                   {
                       cur->next = fast->next;
                       fast->next = cur;
                       *head = fast;
                       
                       prev = fast;
                   }
                   else
                   {
                    prev->next = fast;
                    cur->next = fast->next;
                    fast->next = cur;

                    prev = fast;
                   }
                   cur = prev->next;
               }
               else
               {
                   
                prev = cur;
                cur = cur->next;
                   
               }

            }
        }
    
    
    return 1;
}

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) 
{
    struct ListNode* temp =  list1;
    if(temp==NULL)
    return list2;
    
    if(list2==NULL)
    return list1;

    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next = list2;


    sl_sort(&list1);

    return list1;
}