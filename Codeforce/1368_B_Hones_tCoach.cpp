#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void solve(int number)
{
    int diff=0;
    int a[100];
    vector<int> v;

    for(int i=0; i<number; i++) {
        cin>>a[i];
    }
    sort(a,a+number);

    for(int i=1; i<number; i++) {
        diff = a[i]-a[i-1];
        v.push_back(diff);
    }
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        solve(n);
    }
}
