// pair
/*
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    pair<char,int>p={'a',5};
    cout<<p.first<<endl;
    cout<<p.second<<endl;
    return 0;
}
*/

//pair of pairs
/*
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    pair<int ,pair<int,int>> p={1,{2,3}};
    cout<<p.first<<endl; // 1
    cout<<p.second.first<<endl; // 2
    cout<<p.second.second<<endl; // 3
    return 0;
}
*/


// vector of pair
/*
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<pair<int,int>>vec={{1,2},{2,3},{3,4}};
    vec.push_back({4,5});
    vec.emplace_back(4,5); // in place object create
    for(auto p:vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
}
*/