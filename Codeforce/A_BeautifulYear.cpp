#include<iostream>
using namespace std;
int main()
{
    int y,d4,d3,d2,d1;
    cin>>y;
    while(true)
    {
        y++;
        d4= y%10;
        d3 = (y/10)%10;
        d2= (y/100)%10;
        d1= (y/1000)%10;

        if(d1!=d2 && d1!=d3 && d1!=d4 && d2!=d3 && d2!=d4 && d3!=d4)
        {
            break;
        }
    }

    cout<<y<<endl;
    return 0;
}
