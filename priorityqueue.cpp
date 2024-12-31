// priority queue
// example 1:
/*
#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int main(){
    priority_queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}
*/


// exapmle 2:
// reverse order
/*
#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int main(){
    priority_queue<int,vector<int>, greater<int>>q;
    q.push(1);
    q.push(2);
    q.push(3);
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
} 
*/   