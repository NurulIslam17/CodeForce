#include<iostream>
using namespace std;

int main() {
    int t,a[4],bigger_than_timie=0;
    cin>>t;
    while(t--) {
        for(int i=0; i<4; i++) {
            cin>>a[i];
        }
        for(int i=0; i<4; i++) {
            if(a[0]<a[i]) {
                bigger_than_timie++;
            }
        }
        cout<<bigger_than_timie<<endl;
        bigger_than_timie=0;
    }
}
