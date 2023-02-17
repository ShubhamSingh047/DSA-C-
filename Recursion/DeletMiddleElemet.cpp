#include<iostream>
#include<stack>
using namespace std;

void deleteMid(stack<int> &st, int mid){
    if(st.size()==mid){
        st.pop();
        return;
    };
    int temp=st.top();
    st.pop();
    deleteMid(st, mid);
    st.push(temp);
}

int main(){
    int mid;
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    (st.size()/2==0)?mid=st.size()/2:mid=st.size()/2+1;

    deleteMid(st, mid);
    while(!st.empty()) {
        cout<< st.top()<<" ";
        st.pop();
    }
    return 0;
}