
#include <iostream>
using namespace std;

int main()
{
    int n,m,c, mRes=0,cRes=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>m >> c;

        if(m>c)
        {
            mRes++;
        }
        else if(m<c)
        {
            cRes++;
        }
        else if(m==c)
        {
            continue;
        }
    }
    if(mRes>cRes)
    {
        cout<<"Mishka"<<endl;
    }
    else if(mRes<cRes)
    {
        cout<<"Chris"<<endl;
    }
    else if(mRes==cRes)
    {
        cout<<"Friendship is magic!^^"<<endl;
    }

    return 0;
}
