                         // maps:

#include<iostream>
#include<algorithm>
#include<map>
#include<string>
using namespace std;
int main(){
    map<string,int>m;
    m["tv"]=100;
    m["laptop"]=100;
    m["headphone"]=50;
    m["tablet"]=120;
    m["watch"]=50;

    m.insert({"camera",25});

    m.erase("tv");

    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    // cout<<"count = "<<m["laptop"]<<endl;
    if(m.find("camera")!=m.end()){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}


                

                // other type of maps:
                // 1) multimap:
             
#include<iostream>
#include<algorithm>
#include<map>
#include<string>
using namespace std;
int main(){
    multimap<string, int>m;
    m.emplace("tv",25);
    m.emplace("tv",25);
    m.emplace("tv",25);
    m.emplace("tv",25);
    m.emplace("tv",25);

    m.erase(m.find("tv"));

    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}


                  //2) unordered map
                  // note most used in DSA:
               
#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int>m;
    m.emplace("laptop",100);
    m.emplace("tv",30);
    m.emplace("czmera",60);
    m.emplace("tablet",40);
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
}                  
