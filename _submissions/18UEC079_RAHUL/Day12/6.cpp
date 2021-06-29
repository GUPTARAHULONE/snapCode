/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    int B=2;
      ListNode* ans=new ListNode(-1);
    ListNode* temp=A,*temp1=A,*temp2=ans,*next;
    int count=0;
    
    while(temp!=NULL)
    {
        count++;
        if(count==B)
        {
            count=1;
            next=temp->next;
            temp->next=NULL;
            temp=next;
           // ListNode* rev_list=reverse(temp1);
            
     ListNode* nex=NULL,*prev=NULL;
 
// Reversing the nodes     
while(temp1!=NULL)
{
nex=temp1->next;
temp1->next=prev;
if(nex==NULL)break;
prev=temp1;
temp1=nex;
}
            
            while(temp2->next!=NULL)
            {
                temp2=temp2->next;
            }
            temp2->next=temp1;
            
            temp1=temp;
            
        }
        if(temp==NULL)
        break;
        
        temp=temp->next;
    }
    
     while(temp2->next!=NULL)
            {
                temp2=temp2->next;
            }
            temp2->next=temp1;
    
    return ans->next;
}
