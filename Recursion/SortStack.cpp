#include<iostream>
#include<stack>

using namespace std;

void Insert(stack<int> &st, int temp){
    if(st.empty()||st.top()<=temp){
        st.push(temp);
        return;
     }
    int temp2= st.top();
    st.pop();

    Insert(st,temp);
    st.push(temp2);
    return;
}

void Sort(stack<int> & st){
    if(st.size()==1){
        return;
    }
    int lastNum = st.top();
    st.pop();
    Sort(st);
    
}

int main(){
    stack<int> st;
    st.push(2);
    st.push(1);
    st.push(3);
    st.push(0);
    Sort(st);
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    cout<<endl;
}