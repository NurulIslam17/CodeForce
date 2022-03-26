#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,t;
    string new_string;
    cin>>s;
    cin>>t;
    for(int i=t.length()-1; i>=0; i--)
    {
        new_string.push_back(t[i]);
    }
    cout<<new_string<<endl;
    if(new_string==s)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
