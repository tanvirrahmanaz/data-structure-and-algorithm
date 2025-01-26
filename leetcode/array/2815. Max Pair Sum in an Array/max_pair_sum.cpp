#include<bits/stdc++.h>
using namespace std;
int findLargestDigit(int num) {
    int largest = 0; // সর্বোচ্চ সংখ্যাটি ট্র্যাক করার জন্য
    while (num > 0) {
        int digit = num % 10; // সংখ্যার শেষ ডিজিট বের করা
        if (digit > largest) {
            largest = digit; // সর্বোচ্চ সংখ্যাটি আপডেট করা
        }
        num /= 10; // সংখ্যাটির শেষ ডিজিট বাদ দেওয়া
    }
    return largest;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n,greater());

    int bigvalue=0,largest ;
    for(int i=0;i<n;i++){
        largest = findLargestDigit(arr[i]);
        
        if(largest > bigvalue){
            bigvalue = largest;
        }
    }    

    int sum=0,count = 2;

    for(int i=0;i<n;i++){
        largest = findLargestDigit(arr[i]);
        if(bigvalue == largest){
            if(count > 0){
                sum = sum + arr[i];
                count--;
            }
        }
        
    }
    cout<<sum<<endl;
    return 0;
}