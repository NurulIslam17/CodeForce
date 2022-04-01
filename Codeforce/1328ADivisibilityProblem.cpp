#include<iostream>
using namespace std;

int main()
{
    int t,a,b,m=0;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>a>>b;
       if(a%b==0)
       {
           cout<<"0"<<endl;
       }
       else{
        int m = a%b;
        cout<<b-m<<endl;
       }
    }
    return 0;
}
