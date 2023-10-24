class NodeStack{
    public:
    int element;
    int minElement;
    NodeStack * next;
    NodeStack(int el,int mi): element(el),minElement(mi),next(nullptr){}
};

class MinStack {
public:
    NodeStack * tope;
    int size;
    MinStack(): tope(nullptr), size(0){}    
    void push(int val) {
        //first Element in the stack
        NodeStack *  nuevo_nodo = new NodeStack(val,val);
        if (size){
            int t = topMinimo();
            nuevo_nodo -> minElement  = min(val,t);
        }
        nuevo_nodo -> next = tope;
        tope = nuevo_nodo;
        size ++;
    }
    
    void pop() {
        NodeStack * temp = tope;
        tope = tope->next;
        delete temp;
        size --;
    }
    int topMinimo(){
        return tope->minElement;
    }
    int top() {
        return tope->element;
    }
    
    int getMin() {
        return tope->minElement;
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