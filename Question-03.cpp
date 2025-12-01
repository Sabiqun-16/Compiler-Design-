// S → ( S ) S | ε,
#include<bits/stdc++.h>
using namespace std;

string s;
int i=0;

bool S(){
    if(i<s.size() && s[i]=='('){
        i++;
        if(!S()) return false;
        if(i>=s.size() && s[i]!=')') return false;
        i++;
        return S();
    }
    return true;
}

int main(){
    getline(cin,s);
    if(S() && i==s.size()) cout<<"Valid"<<endl;
    else cout<<"Invalid"<<endl;
}
