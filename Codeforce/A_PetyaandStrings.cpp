// a to z = 97 - 122
// A to Z = 65 - 90
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a,b;
    cin>>a;
    cin>>b;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            a[i]+=32;
        }
        if(b[i]>='A' && b[i]<='Z')
        {
            b[i]+=32;
        }

        if(a[i]>b[i])
        {
            cout<<"1";
            return 0;
        }
        if(a[i]<b[i])
        {
            cout<<"-1";
           return 0;
        }

    }
    cout<<"0"<<endl;
    return 0;
}
