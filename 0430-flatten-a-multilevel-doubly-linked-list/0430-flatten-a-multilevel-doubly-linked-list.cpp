/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* temp = head;
        while(temp!=NULL){
            if(temp->child != NULL){
                Node* currnxt = temp->next;
                temp->next = flatten(temp->child);
                temp->next->prev = temp;
                temp->child = NULL;

                while(temp->next!=NULL){
                    temp= temp->next;
                }
                if(currnxt!=NULL){
                    temp->next = currnxt;
                    currnxt->prev = temp;
                }
            }
            temp = temp->next;
        }
        return head;

        
    }
};