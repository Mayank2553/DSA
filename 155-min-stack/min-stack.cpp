class MinStack {
public:
    struct Node {
        int val;
        int minVal;
        Node* next;
        Node(int v, int m, Node* n) : val(v), minVal(m), next(n) {}
    };
    Node* head = nullptr;

    MinStack() {

    }

    void push(int val) {
        if(head == nullptr){
            Node* newNode = new Node(val, val, nullptr);
            head = newNode;
        }
        else if(head->minVal > val){
            Node* newNode = new Node(val, val, head);
            head = newNode;
        } else{
            Node* newNode = new Node(val, head->minVal, nullptr);
            newNode-> next = head;
            head = newNode;
        }
    }

    void pop() {
        head = head->next;
    }

    int top() {
        return head->val;
    }

    int getMin() {
        return head->minVal;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */