#include<iostream>
using namespace std;

void solve(int n) {
    cout<<n<<" ";
    for(int i=0; i<n-1; i++) {
        cout<<i+1<<" ";
    }
    cout<<endl;
}

int main() {
    int t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        solve(n);
    }
}
