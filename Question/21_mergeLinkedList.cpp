 
#include<bits/stdc++.h>
using namespace std; 

class ListNode{

    public:
        int val;
        ListNode *next;
        

};
 
 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
      
    // create a third linked list 
    ListNode *third = NULL;
    ListNode *last = NULL;
        
    // ckeck if both list is blank then return blank
        if(list1== NULL && list2 == NULL)
            return third;
        
    // check if one of the list is NULL or other is not null 
      
     if (list1 == NULL)
            return list2;
        if (list2 == NULL)
            return list1;
    
    // create a node for head1 and head2
    
    ListNode *first = list1;
    ListNode *second = list2;
        
    
    // check  which list has smaller element then third node and last node point on that node
    // create a first node of the third linked list
    
    if(first->val < second ->val ){
        third = last = first;
        first = first->next;
        third->next = NULL;
    }else{
        third = last = second;
        second  = second->next;
        third->next = NULL;
    }
    
    // ckeck ehich data is smaller in whole list point as a third linked list
    
    while(first != NULL && second != NULL){
        if(first->val < second->val ){
            last->next = first;
            last = first;
            first = first->next;
            last->next = NULL;
        }else{
            
            last->next = second;
            last = second;
            second = second->next;
            last->next = NULL;
    
        }
    }
    
    // if first node is not null then last pointer make as first 
    
    if(first!= NULL){
        last->next = first;
    }else{
        last->next = second;
    }
    return third;
        
    }