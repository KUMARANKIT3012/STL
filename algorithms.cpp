                                    // Algorithm
                //1)SORTING                    
// EXAMPLE 1:
/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int arr[5]={3,5,1,8,2};
    sort(arr,arr+5);
    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}
*/


//EXAMPLE 2: FOR VECTOR
/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>vec={3,5,1,8,2};
    sort(vec.begin(),vec.end());
    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}
*/


// EXAMPLE:3 --> SORT IN DESCENDING ORDER
/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int arr[5]={3,5,1,8,2};
    sort(arr,arr+5,greater<int>());
    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}
*/


// EXAMPLE:4 --> SORT IN (pairs)
/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<pair<int,int>>vec={{3,1},{2,1},{7,1},{5,2}};
    sort(vec.begin(),vec.end());
    for(auto p:vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;
    return 0;
}
*/

// EXAMPLE 4: CUSTOM COMPARATOR(PAIRS):
/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool comparator(pair<int,int>p1, pair<int,int>p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;

    if(p1.first<p2.first) return true;
    else return false;
}
int main(){
    vector<pair<int,int>>vec={{3,1},{2,1},{7,1},{5,2}};
    sort(vec.begin(),vec.end(),comparator);
    for(auto p:vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;
    return 0;
}
*/


                 //2) REVERSE: 
/*                 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>vec={1,2,3,4,5};
    reverse(vec.begin(),vec.end());
    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}                 
*/

                 //3)NEXT PERMUTATION:
/*                 
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s="abc";
    next_permutation(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}
*/


                 // 4)swap, min, max:
/*                 
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    // cout<<max(4,5)<<" "<<min(6,10);
    int a=5;
    int b=10;
    swap(a,b);
    cout<<"a= "<<a<<endl;
    return 0;
}
*/


                // 5) max and min elements:
/*                
 #include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>vec={1,2,3,4,5};
    // cout<<*(max_element(vec.begin(),vec.end()))<<endl;
    // cout<<*(min_element(vec.begin(),vec.end()))<<endl;
    return 0;
}               
*/


                // 6) BINARY SEARCH:
/*                
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>vec={1,2,3,4,5};
    cout<<binary_search(vec.begin(),vec.end(),4)<<endl;
    
    return 0;
}
*/