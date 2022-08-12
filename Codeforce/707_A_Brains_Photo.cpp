#include<iostream>
using namespace std;

void solve(int row, int col) {
    int flag=1;
    char c;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin>>c;
            if(c=='C' || c=='M' || c=='Y') {
                flag=0;
            }
        }
    }
    if(flag == 0) {
        cout<<"#Color"<<endl;
    } else {
        cout<<"#Black&White"<<endl;
    }
}
int main() {
    int n,m;
    cin>>n>>m;
    solve(n,m);
}
