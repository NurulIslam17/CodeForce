
#include<iostream>
using namespace std;

void solve(int num) {
    if(num==1 || num==2) {
        cout<<1<<endl;
    }
    else if(num%2==0) {
        cout<<num/2<<endl;
    }
    else {
      cout<<(num/2)+1<<endl;
    }
}

int main() {
    int t,n;
    cin>>t;

    while(t--) {
        cin>>n;
        solve(n);
    }
}
