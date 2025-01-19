#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int size){
    int start=0, end = size-1;

    while (start<end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}
int main(){
    int n,target;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    reverseArray(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}