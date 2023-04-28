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
    bool isPalindrome(ListNode* head) {
        vector<ListNode*> store;
        while(head){                                        // pushing every node into the vector
            store.push_back(head);
            head=head->next;
        }
        int j=store.size()-1;
        for(int i=0;i<store.size()/2;i++){                  // checking whether it is palindrome or not
            if(store[i]->val!=store[j]->val) return false;
            j--;
        }
        return true;
    }
};