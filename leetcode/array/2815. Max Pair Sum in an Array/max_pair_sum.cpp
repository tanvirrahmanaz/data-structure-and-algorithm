// #include<bits/stdc++.h>
// using namespace std;
// int findLargestDigit(int num) {
//     int largest = 0; // সর্বোচ্চ সংখ্যাটি ট্র্যাক করার জন্য
//     while (num > 0) {
//         int digit = num % 10; // সংখ্যার শেষ ডিজিট বের করা
//         if (digit > largest) {
//             largest = digit; // সর্বোচ্চ সংখ্যাটি আপডেট করা
//         }
//         num /= 10; // সংখ্যাটির শেষ ডিজিট বাদ দেওয়া
//     }
//     return largest;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     sort(arr,arr+n,greater());

//     int bigvalue=0,largest ;
//     for(int i=0;i<n;i++){
//         largest = findLargestDigit(arr[i]);
        
//         if(largest > bigvalue){
//             bigvalue = largest;
//         }
//     }    

//     int sum=0,count = 2;

//     for(int i=0;i<n;i++){
//         largest = findLargestDigit(arr[i]);
//         if(bigvalue == largest){
//             if(count > 0){
//                 sum = sum + arr[i];
//                 count--;
//             }
//         }
        
//     }
//     if(count == 1){
//         sum = sum - arr[0] -1;
//     }
//     cout<<sum<<endl;
    
    
//     return 0;
// }







// using chatgpt and update code 



#include <bits/stdc++.h>
using namespace std;

// Function to find the largest digit in a number
int findLargestDigit(int num) {
    int largest = 0;
    while (num > 0) {
        largest = max(largest, num % 10);
        num /= 10;
    }
    return largest;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Map to store the maximum numbers for each largest digit
    unordered_map<int, int> largestDigitMap;
    int maxSum = -1;

    

    for (int num : nums) {
        int largestDigit = findLargestDigit(num);

        // If the largest digit already exists in the map
        if (largestDigitMap.count(largestDigit)) {

            // Calculate the sum and update maxSum
            maxSum = max(maxSum, largestDigitMap[largestDigit] + num);

            // Update the map to store the maximum number for this largest digit
            largestDigitMap[largestDigit] = max(largestDigitMap[largestDigit], num);
        } else {
            // If no entry exists, add the current number
            largestDigitMap[largestDigit] = num;
        }
    }

    cout << maxSum << endl;
    return 0;
}








// another solution using claude ai 

// class Solution {
// public:
//     // Helper function to find largest digit in a number
//     int largestDigit(int num) {
//         int maxDigit = 0;
//         while (num > 0) {
//             maxDigit = max(maxDigit, num % 10);
//             num /= 10;
//         }
//         return maxDigit;
//     }
    
//     int maxSum(vector<int>& nums) {
//         int n = nums.size();
        
//         // Create vector of pairs to store {number, largest digit}
//         vector<pair<int, int>> numWithDigit;
//         for(int num : nums) {
//             numWithDigit.push_back({num, largestDigit(num)});
//         }
        
//         int maxSum = -1;
        
//         // Compare each pair of numbers
//         for(int i = 0; i < n; i++) {
//             for(int j = i + 1; j < n; j++) {
//                 // If largest digits match
//                 if(numWithDigit[i].second == numWithDigit[j].second) {
//                     maxSum = max(maxSum, numWithDigit[i].first + numWithDigit[j].first);
//                 }
//             }
//         }
        
//         return maxSum;
//     }
// };