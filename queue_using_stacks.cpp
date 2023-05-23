#include <iostream>
#include <vector>

using namespace std;
class MyQueue {
public:
    vector <int> stack_one, stack_two;
    MyQueue() {
    }
    void push(int x) {
        stack_one.push_back(x);
    }
    
    int pop() {
        if (stack_two.empty()){
            for (size_t i = stack_one.size(); i>0; i--){
                stack_two.push_back(stack_one[i-1]);
                stack_one.pop_back();
            }
        }
        int element_to_pop = stack_two.back();
        stack_two.pop_back();
        return element_to_pop;
    }

    int peek() {
        if (stack_two.empty()){
            for (size_t i = stack_one.size(); i>0; i--){
                stack_two.push_back(stack_one[i-1]);
                stack_one.pop_back();
            }
        }
        return stack_two.back();
    }
    
    bool empty() {
        if (stack_two.empty() && stack_one.empty()){
            return true;
        }
        return false;
    }

    void display(vector <int> stack){
        for(auto v: stack){
            cout << v << ' ';
        }
    }
};


int main(){
    MyQueue test;
    test.push(2);
    test.pop();
    test.push(10);
    test.push(20);

    cout << test.empty() <<endl;
    test.pop();
    cout << test.empty();

    //test.display(test.stack_one);
    //test.display(test.stack_two);


    return 0;
}

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */