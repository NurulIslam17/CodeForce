#include<iostream>
using namespace std;
int main()
{
    int room,alreadyLive,totalCapacity,freeRoom=0;
    cin>>room;
    for(int i=0;i<room;i++)
    {
        cin>>alreadyLive>>totalCapacity;
        if(alreadyLive<=totalCapacity-2)
        {
         freeRoom+=1;
        }
    }
    cout<<freeRoom<<endl;
}
