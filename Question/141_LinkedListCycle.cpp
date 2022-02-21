#include<bits/stdc++.h>
using namespace std; 
bool hasCycle(ListNode *head) {
        ListNode *a = head;
        ListNode *b = head;
        
        while (b != nullptr && b->next != nullptr) {
           if ((a = a->next) == (b = b->next->next)) 
               return true;
       }           
   
       return false;    
        
    }

int main()
{
    
    return 0;
}