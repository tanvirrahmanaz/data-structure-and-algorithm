#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m){
    cout<< m.size() << endl;
    for(auto &pr: m){
        cout<< pr.first <<" "<< pr.second<<endl;
    }
}
int main(){
    map<int,string> m;
    m[1] = "abc";
    m[3] = "cde";
    m[2] = "efg";

    m.insert({4,"ghi"});
    // map<int,string> :: iterator it;
    // for(it = m.begin(); it!=m.end() ;it++){
    //     cout<<(*it).first <<" "<< (*it).second<<endl;
    // }

    auto it = m.find(3);
    if(it == m.end()){
        cout<<"No Value";
    }else{
        cout<<(*it).first <<" "<< (*it).second<<endl;
    }

    print(m);
    return 0;
}