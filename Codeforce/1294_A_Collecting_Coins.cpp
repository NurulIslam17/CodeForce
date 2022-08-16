#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

void solve(int alice,int barbara,int cerene, int coins) {
    int sum=0;
    int x = max(alice,barbara);
    int maxX = max(x,cerene);

    sum+=(maxX-alice);
    sum+=(maxX-barbara);
    sum+=(maxX-cerene);

    int remainCoins=coins-sum;

    if(remainCoins>0 && remainCoins%3==0) {
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
