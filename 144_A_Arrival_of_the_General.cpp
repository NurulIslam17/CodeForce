#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,soldier;
    vector<int>val;
    int maxim,minm;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>soldier;
        val.push_back(soldier);
    }

    maxim=val[0];
    minm= val[0];
    int maxIn=0,minInd=0;

    for(int i=0; i<n; i++)
    {
        if(val[i]>maxim)
        {
            maxim=val[i];
            maxIn=i;
        }
        if(val[i]<=minm)
        {
            minm=val[i];
            minInd=i;
        }
    }
    cout<<maxIn<<" "<<minInd<<endl;

    if(maxIn>minInd)
    {
        minInd=(n-1)-minInd;
        cout<<(minInd+maxIn)-1<<endl;
    }
    else
    {
        minInd=(n-1)-minInd;
        cout<<(minInd+maxIn)<<endl;
    }

}
