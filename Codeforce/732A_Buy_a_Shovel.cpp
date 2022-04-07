#include<iostream>
using namespace std;
int main()
{
    int k,r,multi=0;
    cin>>k>>r;
    int i=0;
    while(true)
    {
        i++;
        multi=k*i;
        if(multi%10==r || multi%10==0)
        {
            break;
        }
        else
        {
          continue;
        }
    }
    cout<<i<<endl;

}
