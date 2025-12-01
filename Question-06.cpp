//even number of 1s
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int state=0;
    for (char c:s){
        if(c=='1')
            state=1-state;
    }
    if(state==0) cout<<"Accepted";
    else cout<<"Rejected";
}
