#include <iostream>
using namespace std;

void solve(int num) {
    int sum=0,sum1=0;
    int arr[100001];

    for(int i=0; i<num; i++) {
        cin>>arr[i];
    }

    for(int i=0; i<num; i++) {
        if(arr[i] == 1) {
            sum+=1;
            sum1+=1;

        } else if(arr[i] == 2) {
            sum+=2;
        }
    }

    if(sum%2==0 ) {
        if(num%2!=0 && sum1==0) {
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
        }
    } else {
        cout<<"NO"<<endl;
    }
}

int main() {
    int t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        solve(n);
    }
    return 0;
}

