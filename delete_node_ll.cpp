 void deleteNode(ListNode* node) {
        ListNode *curr=node->next;
        node->val=curr->val;
        node->next=curr->next;
        curr->next=0;
        delete(curr);
    }