//example 2:
/*
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    
    s.insert(1);
    s.insert(2);
    s.insert(3);

    cout<<s.size()<<endl;
    for(int val:s){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}
*/

//exapmle 2:
// lower bound and upper bound:
/*
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    cout<<"lower bound= "<<*(s.lower_bound(4))<<endl; //4
    cout<<"upper bound= "<<*(s.upper_bound(4))<<endl; //5
    for(int val:s){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}
*/