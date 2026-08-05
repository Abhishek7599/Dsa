/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {  
        ListNode* end = head;
        int idx = 0;
        while(end!=NULL){
            end = end->next;
            idx++;
        }
        if(idx%2==0){
            idx = idx+1;
        }
        end = head;
        for(int i=0;i<idx/2;i++){
            end = end->next;
        }
        return end;
    }
};