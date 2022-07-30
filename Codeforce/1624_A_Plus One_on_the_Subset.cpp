#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

void solve(int n1,int op) {
    int a[100];
    for(int i=0; i<n1; i++) {
        cin>>a[i];
    }
    sort(a,a+n1);
    op = a[n1-1] - a[0];
    cout<<op<<endl;

}

int main() {
    int arrLimit, test, arr[100], operation=0;
    cin>>test;
    while(test--) {
        cin>>arrLimit;
        solve(arrLimit,operation);
    }
}
