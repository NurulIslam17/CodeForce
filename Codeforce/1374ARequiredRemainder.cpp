
#include<iostream>
using namespace std;

int main()
{
    int x,y,n,t,k;
    int req=0;

    cin>>t;

    while(t--)
    {
        cin>> x >> y >> n;

        long long qua = n/x;
        long long res = x*qua +y;
        if(res>n)
        {
            res-=x;
        }
        cout<<res<<endl;
    }
}
