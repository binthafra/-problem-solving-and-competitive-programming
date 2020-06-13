//Bismillahir Rahmanir raheem
#include<bits/stdc++.h>
using namespace std;

class MyStack{
    int *arr;
    int tos = 0;

public:
    int size = 2;
    void init(){
        arr = (int*)malloc(size*sizeof(int));
        if(arr) cout<<"Stack size is : " << size<< endl;
    }

    void push(int num){
        if(tos == size){
            cout<<"Stack is full"<<endl;
            return;
        }
        arr[tos++] = num;
        cout<<"Pushed : "<<num<<endl;
    }

    void pop(){
        if(tos == 0){
            cout<<"Stack is empty\n";
            return;
        }
        cout<<"Popped : "<<arr[--tos]<<endl;

    }
};

int main()
{
    MyStack st;
    st.init();
    //st.size = 3;
    st.push(1);
    st.push(2);
    st.push(13);
    st.push(16);
    st.push(12);
    st.push(12);
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    return 0;
}



