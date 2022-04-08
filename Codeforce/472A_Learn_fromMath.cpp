#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>=12)
    {
        if(n%2==0)
        {
            cout<<4<<" "<<n-4<<endl;
        }
        else
        {
            cout<<9<<" "<<n-9<<endl;
        }
    }
    else{
        return 0;
    }

}
