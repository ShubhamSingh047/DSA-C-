#include<iostream>
#include<stack>

using namespace std;
 
//printing stack
int main(){
    stack <int> st;
    st.push(2);
    st.push(3);
    st.push(1);
    st.push(-1);
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    st.size();
    cout<<endl;
}