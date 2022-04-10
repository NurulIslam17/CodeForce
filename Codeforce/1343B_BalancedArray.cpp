#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,evenSum=0,oddSum=0;
    int arr[10000];
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%4!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;

            for(int i=2; i<=n; i+=2)
            {
                cout<<i<<" ";
                evenSum+=i;
            }
            for(int i=1; i<n-2; i+=2)
            {
                cout<<i<<" ";
                oddSum+=i;
            }
            cout<<evenSum-oddSum<<endl;
        }
    }
    return 0;
}
