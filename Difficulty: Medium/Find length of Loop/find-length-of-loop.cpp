/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // code here
        Node* slow=head;
        Node* fast=head;
        
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast){
                int c=1;
                fast=fast->next;//as it's already equal~
                
                while(fast!=slow){
                    c++;
                    fast=fast->next;//as there is loop so fast will again come to middle slow
                }
                return c;
            }
        }
    return 0;
    }
};