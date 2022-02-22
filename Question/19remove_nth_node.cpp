ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        // create a node on the  head;
        
        ListNode *start = new ListNode;
        
        // move start pointer on step
        start->next = head;
        // point first and slow on last
        ListNode *fast = start;
        ListNode *slow = start;
        
        for(int i =1; i<=n; i++){
            fast = fast->next;
        }
            
        while(fast->next != nullptr){
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return start->next;
        
    }