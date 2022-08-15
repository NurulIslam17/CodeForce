#include<iostream>
using namespace std;

void newYear(int hour, int minutes)
{
   cout<<1440-((hour*60)+minutes)<<endl;
}

int main()
{
   int t,h,mints;

   cin>>t;
   while(t--)
   {
      cin>> h >> mints;

      newYear(h,mints);
   }
}
