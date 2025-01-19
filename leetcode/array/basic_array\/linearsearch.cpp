#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size , int target){
    for(int i=0;i<size;i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1; //not found
}
int main(){
    int n,target;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>target;
    // cout<<linearSearch(a,sizeof(a)/sizeof(a[0]),target);
    cout << linearSearch(a, n, target);
    return 0;
}