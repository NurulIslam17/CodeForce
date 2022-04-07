#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,a[100];
    cin>>t;
    while(t--)
    {
        cin>>n;
        bool forYes =true;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        // 1 2 3 4 5
        for(int i=0; i<n-1; i++)
        {
            if(abs(a[i]-a[i+1])>1) // only absoulate value is requires
            {
                forYes=false;
                break;
            }
        }
        if(forYes)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
