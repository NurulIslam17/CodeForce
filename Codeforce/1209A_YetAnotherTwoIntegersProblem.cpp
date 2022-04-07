#include<iostream>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;

    while(t--)
    {
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<endl;
        }
        else
        {
            if(abs(a-b)%10==0)
            {
                cout<<abs(a-b)/10<<endl;
            }
            if(abs(a-b)%10!=0)
            {
                cout<<(abs(a-b)/10)+1<<endl;
            }
        }
    }

}
