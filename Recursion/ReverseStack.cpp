#include<iostream>
#include<stack>

using namespace std;

void Reverse(stack<int> &st){
    if(st.size()==0) return;
    int temp=st.top();
    st.pop();
    Reverse(st);
    st.push(temp);
}

int main(){
    stack<int> st;
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    Reverse(st);
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    return 0;
}