
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,b,year=0;
    cin>>a>>b;

    while(true)
    {
        if(a<=b)
        {
            a=a*3;
            b=b*2;
            year++;
        }
        else
        {
            break;
        }
    }
    cout<<year<<endl;
}
