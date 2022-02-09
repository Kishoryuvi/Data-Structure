#include <iostream>
using namespace std;

class Stack{

   public: 
       int* arr;
       int top;
       int size;

      Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{

            cout<<"stack overflow"<<endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{

            cout<<"stack underflow"<<endl;
        }
    }

    int peek(){
        if(top >= 0){

            return arr[top];
        }
        else{

            cout<<"stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }

        else{
            return false;
        }
    }

};

int main(){

    Stack st(5);

    st.push(25);
    st.push(28);
    st.push(13);
    st.push(8);

    cout<< st.peek() <<endl;

    st.pop();
    st.pop();

    cout<< st.peek() <<endl;

    if(st.isEmpty()){

        cout<< "stack is empty"<<endl;
        
    }
    else{

        cout<<"stack is not empty"<<endl;
    }

}
