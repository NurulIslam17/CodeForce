
#include<iostream>
using namespace std;
int main()
{
    int r, b, sameSocks=0,diffSocks=0;

    cin>>r>>b;

    while(true)
    {
        if(r>0 && b>0)
        {
            sameSocks++;
        }
        else if(r>0 && b==0)
        {
            diffSocks=r/2;
        }
        else if(b>0 && r==0)
        {
            diffSocks=b/2;
        }
        else
        {
            break;
        }

        r--;
        b--;
    }

    cout<<sameSocks<<" "<<diffSocks<<endl;
    return 0;
}
