/*from q0 on input a -> q1
 from q1 on input b or c -> q1
NFA accepts strings of the form a(b|c)* */
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    bool q0=true, q1=false;

    for(char ch:s){
        bool nq0=false, nq1=false;

        if(q0 && ch=='a') nq1=true;
        if(q1 && (ch=='b' || ch=='c')) nq1=true;

        q0=nq0;
        q1=nq1;
    }
    if(q1) cout<<"Accepted";
    else cout<<"Rejected";
}
