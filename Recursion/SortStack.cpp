#include<iostream>
#include<stack>

using namespace std;

void Insert(stack<int> &st, int temp){
    //we rae checking if current value in stack is smaller then temp value which is sent to compare
    if(st.empty()||st.top()<=temp){
        st.push(temp);
        return;
     }
    //since above condition does not satisty this means current value of stack is bigger so we need to store that value and pass that 
    //value and pop that value in order for our smaller value to be inserted
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
    int temp = st.top();
    st.pop();
    Sort(st);
    Insert(st, temp);
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