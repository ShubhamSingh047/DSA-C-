#include <bits/stdc++.h>
using namespace std;

  void moveZeroes(vector<int>& nums) {
        int i=0;
        int c=0;
        int j=0;
        while(i<nums.size()){
            if(nums[i]!=0){
                nums[j++]=nums[i];
            }
            i++;
        }
        while(j<nums.size()){
            nums[j++]=0;
        }
    }

int main(){
    vector <int> vec={0,1,0,3,12};
    cout<<vec.size()<<endl;
    moveZeroes(vec);
    for(auto i:vec)cout<<i;
}