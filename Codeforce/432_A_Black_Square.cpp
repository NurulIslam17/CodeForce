
#include<iostream>
#include<string.h>
using namespace std;

int main() {
    int a,b,c,d;
    char str[100001];
    cin>>a>>b>>c>>d;
    cin>>str;
    int res=0;
    for(int i=0; i<strlen(str); i++) {
        if(str[i]=='1') {
            res+=a;
        } else if(str[i]=='2') {
            res+=b;
        } else if(str[i]=='3') {
            res+=c;
        } else if(str[i]=='4') {
            res+=d;
        }
    }
    cout<<res<<endl;
    return 0;
}
