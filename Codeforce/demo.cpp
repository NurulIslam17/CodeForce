#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

void solve(int alice,int barbara,int cerene, int coins) {
    int sum=0;
    sum = alice+barbara+cerene+coins;
    int div = sum/3;
    if(sum%3==0 && alice<=div && barbara<=div && cerene<=div) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}
int main() {
    int t,a,b,c,n;
    cin>>t;
    while(t--) {
        cin>>a>>b>>c>>n;
        solve(a,b,c,n);
    }
}
