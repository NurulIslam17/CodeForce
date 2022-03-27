
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,h,iH,width=0;
    cin>>n>>h;
    for(int i=0;i<n;i++)
    {
        cin>>iH;
        if(iH>h)
        {
            width+=2;
        }
        if(iH<=h)
        {
             width+=1;
        }
    }
    cout<<width<<endl;
    return 0;
}
