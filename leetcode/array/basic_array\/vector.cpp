#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    vector<char> vec_char ={'a','b','c','d','e'};
    // cout<<vec[0]<<endl;
    // cout<<vec[1]<<endl;
    // cout<<vec[2]<<endl;
    // cout<<vec[3]<<endl;
    // cout<<vec[4]<<endl;

    // vector size 
    cout<<"size= "<< vec.size() << endl;
    //push back
    vec.push_back(25);
    vec.push_back(2);
    vec.push_back(4);
    cout<<"after push back size = "<<vec.size()<<endl;
    // after push back vector value 
    for(int val: vec){
        cout<<val<<" ";
    }
    cout<<endl;
    //pop back (vector element delete korte)
    vec.pop_back();//delete 4 value
    // after pop back vector value 
    for(int val: vec){
        cout<<val<<" ";
    }

    //front and back function means first and last value of vector   
    // at function vector er kno element khujte use kori
    cout<<"vector 1st element"<<vec.at(0)<<endl;
    //vector print using loop
    cout<<"vector print using loop";
    for(char val : vec_char){
        cout<<val << " ";
    }

}