#include<iostream>
using namespace std;
int main()
{
    int stops,exit,enter,current=0,res=0;
    cin>>stops;
    for(int i=0; i<stops; i++)
    {
        cin>>exit>>enter;
        current=current+(enter-exit);
        if(current>res)
        {
            res=current;
        }
    }
    cout<<res<<endl;
}
