#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

void solve(int n) {
    bool arr[100];
    int x;

    memset(arr,0,sizeof(arr));

    vector<int>v;


    for(int i=0; i<(2*n); i++) {
        cin>>x;
        if(!arr[x]) {
            v.push_back(x);
            arr[x]=1;
        }
    }

    for(int i=0; i<v.size(); i++)
    {
       cout<<v[i]<<" ";
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
