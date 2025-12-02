#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    bool block= false;
    while (getline(cin, s)) {
        string out="";
        for (int i = 0; i < s.size(); i++) {
            //Single line
            if (!block && i+1 < s.size() && s[i]=='/' && s[i+1]=='/')
            break;
            //start block comment
            if (!block && i+1 < s.size() && s[i]=='/' && s[i+1]=='*'){
                block=true;
                i++;
                continue;
            }
            //end block comment
            if(block && i+1 < s.size() && s[i]=='*' && s[i+1]=='/') {
                block=false;
                i++;
                continue;
            }
            if(!block) out+=s[i];
        }
       if(!block) cout<<out<<'\n';
    }

}
