#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string first,second,third,combined;

    cin>>first>>second>>third;
    combined = first+second;
    sort(combined.begin(),combined.end());
    sort(third.begin(),third.end());
    //cout<<endl;
    //cout<<combined<<endl;
    //cout<<third<<endl;

    if(combined==third)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
