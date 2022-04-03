#include<iostream>
#include<string>
#include <cctype>
#include<algorithm>
using namespace std;

int main()
{
    int n, totlalAlphabet=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        s[i]=toupper(s[i]);
    }
       sort(s.begin(),s.end());
    for(int i=0; i<n; i++)
    {
        if(s[i]!=s[i+1])
        {
            totlalAlphabet++;
        }
    }

    if(totlalAlphabet==26)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
