#include<iostream>
using namespace std;

void polycarp(int num)
{
   int res=0;
   res=num/3;

   if(num%3==0)
   {
      cout<< res <<" "<<res<<endl;
   }
   else if(num%3==1)
   {
      cout<<res+1 <<" "<<res<<endl;
   }
   else if(num%3==2)
   {
      cout<<res <<" "<<res+1<<endl;
   }

}

int main()
{
   int t,n;
   cin>>t;
   while(t--)
   {
      cin>>n;
      polycarp(n);
   }
}
