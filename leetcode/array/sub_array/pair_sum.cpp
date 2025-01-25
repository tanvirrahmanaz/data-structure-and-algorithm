// bruthforce method O(n^2  )

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0; i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i] + arr[j] == 9){
//                 cout<<arr[i]<<" + "<<arr[j]<<" = "<<"9";
//                 break;
//             }
//         }
//     }
//     return 0;
// }


// using vector
#include<iostream>
#include<vector>
using namespace std;

vector<int> pairsum(vector<int> nums, int target){
    vector<int> ans;
    int n= nums.size();

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i] + nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {2, 7,11,15};
    int target = 9;

    vector<int> ans = pairsum(nums,target);
    cout<<ans[0] << "," <<ans[1] << endl;
    return 0;
}