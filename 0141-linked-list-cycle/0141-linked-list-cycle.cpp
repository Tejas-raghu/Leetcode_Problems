/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        unordered_map<ListNode * , int> mapp;
        ListNode * temp = head;
        
        while(temp){
            if(mapp.count(temp)) return true;
            else{
                mapp[temp]++;
                temp = temp->next;
            }
        }
        return false;
        
    }
};