#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,target;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cin>>target;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(array[i] + array[j] == target){
                cout<<"["<<i<<","<<j<<"]";
            }
        }
    }
    return 0;
}

// leet code solution usign vector

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
        
//         for(int i=0;i<=nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[i]+nums[j] == target){
//                     return {i,j};
//                 }
//             }
//         }
//         return {};
//     }
// };