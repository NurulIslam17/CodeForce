
#include<iostream>
using namespace std;

int main()
{

    int n,firstCon,high,low,count=0;
    cin>>n;
    cin>>firstCon;

    high=firstCon;
    low=firstCon;

    for(int i=1;i<n;i++)
    {   int a;
        cin>>a;

        if(a<low)
        {
            low=a;
            count++;
        }
        if(a>high)
        {
            high=a;
            count++;
        }
    }
    cout<<count<<endl;

/*

// Anoother way Not accepted
    int n,count=0;
    cin>>n;
    int a[100];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];

    }

    for(int i=1; i<n; i++)
    {
        if(a[i]<a[i+1])
        {
            count++;
        }
    }
    cout<<count<<endl;

*/
}
