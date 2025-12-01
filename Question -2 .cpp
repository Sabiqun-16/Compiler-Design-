/*- E → T E'
- E' → + T E' | - T E' | ε
- T → F T'
- T' → * F T' | / F T' | ε
- F → ( E ) | id */
#include<bits/stdc++.h>
using namespace std;

string s;
int i=0;

bool E(); bool ES();
bool T(); bool TS();
bool F();

bool id(){
    if(!isalnum(s[i]) && s[i]!='_') return false;
    while(i<s.size() && (isalnum(s[i]) || s[i] == '_'))
        i++;
    return true;
}

bool F(){
    if(s[i]=='('){
        i++;
        if(!E()) return false;
        if(s[i]!=')') return false;
        i++;
        return true;
    }
    return id();
}

bool T(){
    return F() && TS();
}

bool TS(){
    while(i<s.size() && (s[i]=='*' || s[i]=='/')){
        i++;
        if(!F()) return false;
    }
    return true;
}

bool E(){
    return T() && ES();
}
bool ES(){
    while(i<s.size() && (s[i]=='+' || s[i]=='-')){
        i++;
        if(!T()) return false;
    }
    return true;
}

int main(){
    getline(cin,s);
    if(E() && i==s.size()) cout<<"Valid"<<endl;
    else cout<<"Invalid"<<endl;
}
