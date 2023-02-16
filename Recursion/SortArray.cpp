#include<iostream>
#include<vector>
using namespace std;

void Insert(vector<int> &v, int temp){
    if(v.size()==0||v[v.size()-1]<=temp){
        v.push_back(temp);
        return;
    }
    int insert_temp = v[v.size()-1];
    v.pop_back();
    Insert(v,temp);
    v.push_back(insert_temp);
}

void Sort(vector <int> & v){
    if(v.size()==1){
        return;
    }
    int temp=v[v.size()-1];
    v.pop_back();
    Sort(v);
    Insert(v, temp);
}

int main(){
    vector <int> v{2,1,3,0};
    Sort(v);
    for(int i:v){
        cout<<i;
    }
    cout<<endl;
}
