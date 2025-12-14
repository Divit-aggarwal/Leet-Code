// Last updated: 14/12/2025, 21:55:58
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
private:
    void insert(Node* &head, Node* &tail, int data) {
        Node* node = new Node(data);
        if (head == nullptr) {
            head = node;
            tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }

public:
    Node* copyRandomList(Node* head) {
        Node* nhead = nullptr;
        Node* ntail = nullptr;

        Node* temp1 = head;
        while (temp1 != NULL) {
            insert(nhead, ntail, temp1->val);
            temp1 = temp1->next;
        }

        map<Node*, Node*> node;
        temp1 = head;
        Node* temp2 = nhead;

        while(temp1 != nullptr && temp2 !=nullptr ){
            node[temp1] = temp2;
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
        temp1 = head;
        temp2 = nhead;
        while(temp1 != nullptr){
            temp2 -> random  = node[temp1 -> random];
            temp1 = temp1-> next;
            temp2 = temp2 -> next;
        }
        return nhead;
    }
};