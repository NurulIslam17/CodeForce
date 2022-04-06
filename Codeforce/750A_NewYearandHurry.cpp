#include<iostream>
using namespace std;

int main()
{
    int n,m,canSolve=0,time=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        time=time+(i*5);
        //cout<<time<<endl;
        if(time<=240-m)
        {
            canSolve++;
        }
    }

    cout<<canSolve<<endl;
    return 0;

}
