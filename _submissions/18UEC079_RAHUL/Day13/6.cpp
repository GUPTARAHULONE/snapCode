/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * 
 * typedef struct ListNode listnode;
 * 
 * listnode* listnode_new(int val) {
 *     listnode* node = (listnode *) malloc(sizeof(listnode));
 *     node->val = val;
 *     node->next = NULL;
 *     return node;
 * }
 */
/**
 * @input A : Head pointer of linked list 
 * @input B : Integer
 * 
 * @Output head pointer of list.
 */
listnode* rotateRight(listnode* A, int B) {
    listnode* temp=A,*prev=NULL,*next;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        prev=temp;
        temp=temp->next;
    }
    temp=A;
    B=B%count;
    if(B==0)
    return A;
    
    int c=count-B;
    int i=1;
    while(i<c)
    {
        i++;
       temp=temp->next;
    }
    next= temp->next;
    temp->next=NULL;
    
    prev=A;
    return next;
}
