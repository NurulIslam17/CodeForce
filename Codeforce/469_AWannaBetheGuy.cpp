#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,x,y,c=0;
    cin>>n;

    vector<int>val;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        val.push_back(x);
    }
    for(int j=1; j<n; j++)
    {
        cin>>y;
        val.push_back(y);
    }
    sort(val.begin(),val.end());
    for(int i=0; i<n+(n-1); i++)
    {
        if(val[i]!=val[i+1])
        {
            c=c+1;
        }
    }
    if(n==(c))
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}
