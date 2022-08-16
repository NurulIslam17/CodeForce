#include<iostream>
using namespace std;

void UnstableArray(int arrLen, int elemSum)
{
   if(arrLen==1)
   {
      cout<<0<<endl;
   }
   else if(arrLen==2)
   {
      cout<<elemSum<<endl;
   }
   else{
      cout<<2*elemSum<<endl;
   }
}

int main()
{
   int t,n,m;

   cin>>t;
   while(t--)
   {
      cin>>n>>m;
      UnstableArray(n,m);
   }
}
