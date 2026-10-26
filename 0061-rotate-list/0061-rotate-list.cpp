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
#define null NULL
#define Node ListNode
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==null){
            return null;
        }
        Node* last=head;
        int n=1;
        while(last->next!=null){
            n++;
            last=last->next;
        }
        k=k%n;
        if(k==0){
            return head;
        }
        Node* t=head;
        int count=1;
        while(t!=null){
            if(count==n-k){
                break;
            }
            count++;
            t=t->next;
        }
        last->next=head;
        Node* res=t->next;
        t->next=null;
        return res;
    }
};