#include<iostream>
using namespace std;

void solve(int width, int height, int num) {
    int res=1;
    while(width%2==0) {
        res*=2;
        width/=2;
    }
    while(height%2==0) {
        res*=2;
        height/=2;
    }

    if(res>=num) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}

int main() {
    int t,w,h,n;
    cin>>t;

    while(t--) {
        cin>>w>>h>>n;
        solve(w,h,n);
    }
}
