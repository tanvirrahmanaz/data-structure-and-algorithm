// moores voting algoritm (if freq>(n/2)) time complexity O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,val;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int freq=0,ans=0;
    for(int i=0;i<n;i++){
        if(freq==0){
            ans = a[i];
        }
        if(ans == a[i]){
            freq ++  ;
        }
        else freq--;
    }
    cout<<ans;
    return 0;
}


// leet code solution 


// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int freq=0,ans=0;
//         for(int i=0;i<nums.size();i++){
//             if(freq==0){
//                 ans = nums[i];
//             }
//             if(ans == nums[i]){
//                 freq ++  ;
//             }
//             else freq--;
//         }
//         return ans;
//     }
// };