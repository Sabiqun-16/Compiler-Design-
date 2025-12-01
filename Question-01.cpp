#include<bits/stdc++.h>
using namespace std;

string s;
int i=0;

bool isId(){
    while(i<s.size() && s[i]==' ') i++;

    if(!isalpha(s[i]) && s[i]!='_')
        return false;
    //i++;
    while(i<s.size() && (isalnum(s[i]) || s[i]=='_'))
        i++;
    while(i<s.size() && s[i]==' ') i++;

    return true;
}

bool L(){
    if(!isId()) return false;
    while(i<s.size() && s[i]==' ') i++;

    if(i<s.size() && s[i]==','){
        i++;
        return L();
    }
    return true;
}

int main(){
    getline(cin,s);
    if(L() && i==s.size()) cout<<"Vaild"<<endl;
    else cout<<"Invaild"<<endl;
}
