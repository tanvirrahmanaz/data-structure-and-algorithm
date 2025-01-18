// O(n*2)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,val;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int freq =0;
        for(int j=0;j<n;j++){
            if(a[i] == a[j]){
                freq++;
            }
        }
        if(freq >= floor(n/2)){
            val = a[i];
            break;
        }
    }
    cout<<val;
    return 0;
}