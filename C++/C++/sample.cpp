#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;

int main(){
    stack<char> s;
    string a = "halwa";
    for(auto i: a) {
        s.push(i);
    }

    while(!s.empty()) {
        cout<<s.top();
        s.pop();
    }
    cout<<endl;

    stack<char> stack;
    
return 0;
}