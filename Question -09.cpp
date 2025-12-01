/* a C keyword (from a small fixed list, e.g., int, if, else, for, while, return, char, float, double,
void),
- a valid identifier,
- or an invalid token. */
#include<bits/stdc++.h>
using namespace std;

bool iskeyword(string s){
    string st[]={"int","if","else","for","while","return","char","float","double","void"};
    for(string x:st)
        if(x==s) return true;
    return false;
}
bool isId(string s){
    if(!isalpha(s[0]) && s[0]!='_') return false;
    for(char c:s)
        if(!isalnum(c) && c!='_') return false;
    return true;
}
int main(){
    string s;
    while(cin>>s){
        if(iskeyword(s)) cout<<s<<" : Keyword"<<endl;
        else if(isId(s)) cout<<s<<" : Identifier"<<endl;
        else cout<<s<<" : invalid"<<endl;
    }
}
