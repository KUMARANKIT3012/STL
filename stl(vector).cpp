                    // STL:

// VECTOR:
// Example 1:
/*
#include<iostream>
#include<vector> // used to create vector
using namespace std;
int main(){
    vector<int>vec; // size()=0
    vec.push_back(1); // used to increase the vector size() 
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6);
    vec.pop_back();

    // cout<<vec.size()<<endl; // it is used to print the size of the vector
    // cout<<vec.capacity()<<endl; // it is used to print the capacity of the vector
    
    for(int val :vec){
        cout<<val<<" ";
    }
     // cout<<"value at index 2: "<<vec[2]<<"or"<<vec.at(2)<<endl; // get the value at a particular index.
    
    cout<<"front"<<vec.front()<<endl;
    cout<<"back"<<vec.back()<<endl;
    return 0;
}   
*/


// Example 2:
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>vec={1,2,3,4,5}; // we want to initialize 
    // vector<int>vec(3,10); // size is 3 and value (same) is  10.
    vector<int>vec1={1,2,3,4,5};
    vector<int>vec2(vec1);
    vec2.pop_back();
    for(int val : vec2){
        cout<<val<<" ";
    }
    return 0;
}
*/


// FEW MORE FUNCTIONS OF VECTOR:
// 1)erase:
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5};
    // vec.erase(vec.begin()); // erase function
    // vec.erase(vec.begin()+2); // used to erase the value '3'.
    vec.erase(vec.begin()+1,vec.begin()+3); // erase 2 value at a same time 
    for(int val : vec){
        cout<<val<<" ";
    }
    return 0;
}
*/

// 2) Insert function:
// 3) clear:
// 4) empty:
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5};
    // vec.insert(vec.begin()+2,100);
    vec.clear();
    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<" is empty : "<<vec.empty()<<endl;
    return 0;
}
*/


// VECTOR ( ITERATOR ):
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5};
    cout<<"vec.begin: "<<*(vec.begin())<<endl; // vector begin
    cout<<"vec.end : "<<*(vec.end())<<endl; // vector end
    return 0;
}
*/

// VECTOR LOOPS:
// FORWARD LOOP:
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>vec{1,2,3,4,5};
vector<int>::iterator it;
for(it=vec.begin(); it!=vec.end(); it++){
    cout<<*(it)<<" ";
}
return 0;
}
*/

//REVERSE LOOP:
// 1) rbegin 2) rend

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5};
    for(auto it=vec.rbegin(); it!=vec.rend(); it++){
        cout<<*(it)<<endl;
    }
    return 0;
}

