
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
   int t;
   cin>>t;

   while(t--)
   {
         int a, b;

   cin>> a>> b;

   int n1= min(a,b);
   int n2 = max(a,b);
   int n3 = max(n1*2 , n2);

   cout<<pow(n3,2)<<endl;
   }
}
