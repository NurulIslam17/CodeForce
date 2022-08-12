#include<iostream>
using namespace std;
#include<math.h>

void solve(int num)
{
   int sum1=0,sum2=0;
   int halfBef = num/2;

   for(int i=1; i<=num; i++)
   {
      if(i<halfBef || i==num)
      {
         sum1+=pow(2,i);
      }
      else{
         sum2+=pow(2,i);
      }
   }
   cout<<sum1-sum2<<endl;
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
