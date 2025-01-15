                                         // stack
// example 1:

#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}



                                       // Swap function

#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);

    stack<int>s2;
    s2.swap(s);
    cout<<"s size"<<s.size()<<endl;
    cout<<"s2 size"<<s2.size()<<endl;
    return 0;
}
*/
