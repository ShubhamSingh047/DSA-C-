#include <bits/stdc++.h>
using namespace std;

void Solution(int arr[][3]){
    int idv_row_sum=0;
    int sum=0;
    int row=-1;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            idv_row_sum+=arr[i][j];
        }
        if(sum<idv_row_sum){
            sum=idv_row_sum;
            row=i;
        }
        idv_row_sum=0;
    }
    cout<<row<<endl;
}

int main(){
    int arr[3][3]={{1,2,3},{14,15,16},{7,8,9}};
    Solution(arr);
}