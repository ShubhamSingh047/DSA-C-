#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={1,2,3,4};
    // vector<int>::iterator i=v.end();
    v.insert(--v.end(),2);
    // cout<<v[3];

    vector<int> ::iterator w =v.end();
    cout<<*w<<endl;
}











