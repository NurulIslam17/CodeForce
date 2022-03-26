#include<iostream>
using namespace std;

int main()
{
    int i,particip,place,poss,selectedNxtRound=0;

    cin >>particip >> place;
    i=0;
    while(particip--)
    {
        cin>>poss;
        if(poss>place)
        {
           selectedNxtRound+=1;
        }
        i++;
    }
    cout<<selectedNxtRound<<endl;
}
