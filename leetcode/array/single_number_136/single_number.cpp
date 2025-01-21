#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],frq=0;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        frq = frq ^ arr[i];
    }
    cout<<frq;
    return 0;
}


// leet code solution 
// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int ans =0;
//         for(int val: nums){
//             ans ^= val;
//         }
//         return ans;
//     }
// };
