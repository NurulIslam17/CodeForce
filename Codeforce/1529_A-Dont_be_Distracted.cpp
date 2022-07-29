#include<iostream>
#include<string>
#include<map>

using namespace std;

void solve(int str_limit,string str) {
    int flag = 1;
    map<char,int>mp;
    for(int i=0; i<str_limit; i++) {
        mp[str[i]]++;
        if( mp[str[i]]>1 && str[i-1]!=str[i]) {
            flag=0;
            break;
        }
    }

    if(flag) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}

int main() {

    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        string str;
        cin>>str;
        solve(n,str);
    }
}
