#include<iostream>
#include<vector>
using namespace std;
int n,pos,iPos[105];
int main()
{

    //vector<int>nn,ind;

    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>pos;
        iPos[pos]=i;
    }

    for(int i=1; i<=n; i++)
    {
        cout<<iPos[i]<<" ";
    }
}
