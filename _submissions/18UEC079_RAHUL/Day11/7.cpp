/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
   // ListNode* head=new ListNode*(-1);
    ListNode * temp=A;
    vector<int>v;
    int count=1;
    while(temp!=NULL)
    {
        if(count%2==0)
        v.push_back(temp->val);

        count++;
        temp=temp->next;
    }
    sort(v.rbegin(),v.rend());
      int i=0;
      temp=A;
      count=1;
     while(temp!=NULL)
     {
         if(count%2==0)
         {
             temp->val=v[i];
             i++;
         }
         //cout<<A->val<<endl;
         temp=temp->next;
         count++;
     }
     return A;
}

