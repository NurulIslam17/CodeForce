#include<iostream>
#include<string>
using namespace std;
int main()
{
    int up=0,low=0;
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(isupper(s[i]))
        {
            up++;
        }
        else
        {
            low++;
        }
    }
    if(up>low)
    {
        for(int i=0; i<s.length(); i++)
        {
            char ch;
            ch=toupper(s[i]);
            cout<<ch;
        }
    }
    else
    {
        for(int i=0; i<s.length(); i++)
        {
            char ch;
            ch=tolower(s[i]);
            cout<<ch;
        }
    }
}
