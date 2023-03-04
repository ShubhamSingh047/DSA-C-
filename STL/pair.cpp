#include <bits/stdc++.h>
using namespace std;

int main(){
pair<int,int>p={1,2};
cout<<p.first<<" "<<p.second<<endl;

//nested pair
pair<int , pair<int,int>>p1={1,{2,3}};
cout<<"first pair ->"<<p1.first<<" second pair "<<p1.second.first<< " <- first , second -> "<<p1.second.second<<endl;

//Other dataStructure in pair
pair<int, int>arr[]={{1,2},{2,3},{4,5}};
cout<<arr[1].first<<" "<<arr[2].second;
}