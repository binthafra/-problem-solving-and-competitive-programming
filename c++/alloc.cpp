//Bismillahir Rahmanir raheem
#include<bits/stdc++.h>
using namespace std;

class MyStack{
    int size = 0;
    int *arr;
    int tos = 0;

public:

    void init(){
        size+=2;
        if(size == 2)
            arr = (int*)malloc(size*sizeof(int));
        else
            arr = (int*)realloc(arr, size*sizeof(int));

        if(arr == 0){
            cout<<"Allocation Error";
            exit(1);
        }
        cout<<"size increased to : " << size << endl << endl;
    }

    void push(int num){
        if(tos == size){
            cout<<"\nStack is full"<<endl;
            init();
        }
        arr[tos++] = num;
        cout<<"Pushed : "<<num<<endl;
    }

    void pop(){
        if(tos == 0){
            cout<<"\nStack is empty\n";
            return;
        }
        cout<<"Popped : "<<arr[--tos]<<endl;

    }
};

int main()
{
    MyStack st;
    st.init();
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

