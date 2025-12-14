// Last updated: 14/12/2025, 19:59:48
1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    Node* next;
7    Node* random;
8
9    Node(int _val) {
10        val = _val;
11        next = NULL;
12        random = NULL;
13    }
14};
15*/
16
17class Solution {
18private:
19    void insert(Node* &head, Node* &tail, int data) {
20        Node* node = new Node(data);
21        if (head == nullptr) {
22            head = node;
23            tail = node;
24        } else {
25            tail->next = node;
26            tail = node;
27        }
28    }
29
30public:
31    Node* copyRandomList(Node* head) {
32        Node* nhead = nullptr;
33        Node* ntail = nullptr;
34
35        Node* temp1 = head;
36        while (temp1 != NULL) {
37            insert(nhead, ntail, temp1->val);
38            temp1 = temp1->next;
39        }
40
41        map<Node*, Node*> node;
42        temp1 = head;
43        Node* temp2 = nhead;
44
45        while(temp1 != nullptr && temp2 !=nullptr ){
46            node[temp1] = temp2;
47            temp1 = temp1 -> next;
48            temp2 = temp2 -> next;
49        }
50        temp1 = head;
51        temp2 = nhead;
52        while(temp1 != nullptr){
53            temp2 -> random  = node[temp1 -> random];
54            temp1 = temp1-> next;
55            temp2 = temp2 -> next;
56        }
57        return nhead;
58    }
59};