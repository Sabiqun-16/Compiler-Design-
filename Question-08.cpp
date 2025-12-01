/* - IDENTIFIER (starting with a letter or _, followed by letters/digits/_)
- NUMBER (sequence of digits)
- SYMBOL (any other single charac */
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int i=0;

    while(i<s.size()){
        if(isspace(s[i])){
            i++;
            continue;
        }
        if(isalpha(s[i]) || s[i]=='_'){
            string st="";
           // st+=s[i++];
            while(i<s.size() && (isalnum(s[i]) || s[i]=='_'))
                  st+=s[i++];
            cout<<"IDENTIFIER : "<<st<<endl;
        }

        else if(isdigit(s[i])){
            string st="";
           // st+=s[i++];
            while(i<s.size() && isdigit(s[i]))
                  st+=s[i++];
            cout<<"NUMBER : "<<st<<endl;
        }
        else cout<<"SYMBOL : "<< s[i++]<<endl;
    }
}
