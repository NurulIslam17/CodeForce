#include<iostream>
using namespace std;

void solve(int a, int b)
{
   if(a==b)
   {
      cout<<0<<endl;
   }
   else if(a>b)
   {
      if((a-b)%2==0)
      {
         cout<<1<<endl;
      }
      else{
         cout<<2<<endl;
      }
   }
   else{
         if((b-a)%2==1)
      {
         cout<<1<<endl;
      }
      else{
         cout<<2<<endl;
      }
   }
}

int main()
{
   int t,a,b;
   cin>>t;

   while(t--)
   {
      cin>>a>>b;
      solve(a,b);
   }
}
