#include<iostream>
using namespace std;
int main()
{
    int n,note=0;
    cin>>n;
    while(n)
    {
        if(n>=100)
        {
            note++;
            n=n-100;
        }
        else if(n>=20)
        {
            note++;
            n=n-20;
        }
        else if(n>=10)
        {
            note++;
            n=n-10;
        }
        else if(n>=5)
        {
            note++;
            n=n-5;
        }
        else
        {
            note++;
            n=n-1;
        }
    }
    cout<<note<<endl;
    return 0;
}
