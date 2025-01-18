// O(nlogn + n) --> O(nlogn)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,freq=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //sort this array
    // sort(a.begin(),a.end()) eita sudhu vector er upor kaj krbe
    sort(a,a+n);

    //freq count
    int ans=a[0];
    for(int i=1;i<n;i++){
        if(a[i] == a[i-1]){
            freq++;
        }
        else{
            freq = 1;
            ans = a[i];
        }
    }
    cout<<ans;
    return 0;
}