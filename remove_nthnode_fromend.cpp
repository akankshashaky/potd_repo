 int get( ListNode *head)
    {
         ListNode *tmp=head;
         int c=0;
         while(tmp!=NULL)
         {
            c++;
            tmp=tmp->next;
         }
         return c;
    }
    ListNode* removeNthFromEnd(ListNode* &head, int n) {
        int m=get(head);
        if((head->next==NULL&&n==1) ||m<n )
        {
            return NULL;
        }
       
        //int m=get(head);
        int p=m-n,c=1;
        ListNode *pre=NULL;
        ListNode *curr=head;
        while(curr!=NULL && c<=p)
        {
            c++;
            pre=curr;
            curr=curr->next;
        }
        if(pre!=0)
        {
            ListNode *next_next=curr->next;
         curr->next=NULL;
         delete(curr);
         pre->next=next_next;
        }
        else
        {
            head=head->next;
            curr->next=0;
            delete(curr);

        }
         return head;

    }