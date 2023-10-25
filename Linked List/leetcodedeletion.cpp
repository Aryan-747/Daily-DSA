
#include<iostream>

using namespace std;

 
 struct ListNode {
     int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL){}
 };

class Solution {
public:
    void deleteNode(ListNode* node) {

        if(node->next == NULL)
        {
            delete node;
        }

        else
        {
            ListNode* temp2;

            swap(node->val,node->next->val);
            temp2 = node->next;
            node->next = node->next->next;

            delete temp2;


        }
        
    }
};