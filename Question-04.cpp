//S → a S b | a b     form: a^n b^n
#include<bits/stdc++.h>
using namespace std;

string s;
int i=0;

bool S(){
    if(i<s.size() && s[i]=='a'){
        i++;
        if(i<s.size() && s[i]=='b'){
            i++;
            return true;
        }

        if(!S()) return false;
        if(i>=s.size() || s[i]!='b') return false;
        i++;
        return true;
    }
    return false;
}

int main(){
    getline(cin,s);
    if(S() && i==s.size()) cout <<"Valid";
    else cout<<"Invalid";
}
