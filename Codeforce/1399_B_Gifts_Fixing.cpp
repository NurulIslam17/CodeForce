#include<iostream>
#include<algorithm>
#define ll long long
const int maxm =1e5+5;

using namespace std;

void solve(int num,int minA,int minB) {
    int a[100],b[100];
    ll res=0;
    for(int i=0; i<num; i++) {
        cin>>a[i];
        minA = min(minA, a[i]);
    }
    for(int i=0; i<num; i++) {
        cin>>b[i];
        minB = min(minB,b[i]);
    }
    for(int i=0; i<num; i++) {
        int miniA = a[i]-minA;
        int miniB = b[i]-minB;
        ll c = max(miniA, miniB );
        res+=c;
    }
    cout<<res<<endl;
}

int main() {
    int t,n;
    int minA = maxm;
    int minB= maxm;
    cin>>t;
    while(t--) {
        cin>>n;
        solve(n,minA,minB);
    }
}
