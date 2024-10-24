                            // LIST
// 1) push_back and push_front:

#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main(){
    list<int>l;

    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);

    for(int val:l){
        cout<<val<<" ";
    }
    return 0;
}


// output= 4 3 2 1 


// 2) emplace_back and emplace_front:

#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main(){
    list<int>l;

    l.emplace_back(1);
    l.emplace_back(2);
    l.emplace_front(3);
    l.emplace_front(4);

    for(int val:l){
        cout<<val<<" ";
    }
    return 0;
}


// output= 4 3 2 1 



// 3)pop_back(),pop_front():

#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main(){
    list<int>l;

    l.emplace_back(1);
    l.emplace_back(2);
    l.emplace_front(3);
    l.emplace_front(4);

    l.pop_back();
    l.pop_front();

    for(int val:l){
        cout<<val<<" ";
    }
    return 0;
}


// output = 3 1



// we can also initialize the value in list:
#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main(){
    list<int>l={1,2,3,4,5};

    for(int val:l){
        cout<<val<<" ";
    }
    return 0;
}
