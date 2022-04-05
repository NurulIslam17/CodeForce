#include<iostream>
using namespace std;
int main()
{
    int t,n;

    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        if(n==1 || n==2)
        {
            cout<<0<<endl;
        }else if(n%2==0)
        {
            cout<<(n/2)-1<<endl;
        }else
        {
            cout<<n/2<<endl;
        }
    }
    return 0;
    /*
    int t,n,way=0,a,b;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        a=n-1;
        b=n-a;
        if(a>0 && b>0)
        {
            while(a>b)
            {
                way++;
                a--;
                b++;
            }
            cout<<way<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
        way=0;
    }

    */

}
