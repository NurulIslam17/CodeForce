#include<iostream>
using namespace std;

void solve(long long num) {
    long long total=0,ordNum;
    {
        for(int i=1; i<=9; i++)
         {
            ordNum=i;
            while(ordNum<=num)
            {
                total++;
                ordNum=(ordNum*10)+i;
            }
        }
        cout<<total<<endl;
    }
}
int main() {
    int t;
    long long n;
    cin>>t;
    while(t--) {
        cin>>n;
        solve(n);
    }
}
