 ListNode* middleNode(ListNode* head) {
        if(head->next==NULL)
        {
            return head;
        }
        int n=0;
        ListNode *temp=head;
        while(temp!=NULL)
        {
            n++;
            temp=temp->next;
        }
        int p=n/2+1,c=1;
        ListNode *temp1=head;
        while(c<p)
        {
            c++;
            temp1=temp1->next;
        }
        head=temp1;
        return head;
    }