#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr) / sizeof(arr[0]) , current_sum =0 , maximum_value = INT_MIN;
    
    for(int i=0;i<n;i++){
        current_sum = current_sum + arr[i];
        maximum_value = max(current_sum , maximum_value);
        if(current_sum < 0){
            current_sum = 0 ;
        }
    }
    cout<<maximum_value<<endl;
    return 0;
}