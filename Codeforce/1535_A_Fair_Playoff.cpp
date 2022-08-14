#include <iostream>
#include<algorithm>
using namespace std;

void solve() {
    int a[4];
    for(int i=0; i<4; i++) {
        cin>>a[i];
    }
    int x= max(a[0],a[1]);
    int y = max(a[2],a[3]);

    sort(a,a+4);

    if(x>y) {
        swap(x,y);
    }

    if(x==a[2] && y==a[3]) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
