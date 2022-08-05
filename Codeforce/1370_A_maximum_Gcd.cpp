#include<iostream>
using namespace std;

void solve(int num)
{
   if(num%2==0)
   {
      cout<<(num/2)<<endl;
   }
   else{
      cout<<(num-1)/2<<endl;
   }
}

int main()
{

   int t,n;
   cin>>t;
   while(t--)
   {
      cin>>n;
      solve(n);
   }
}
