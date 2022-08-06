#include<iostream>
using namespace std;

void fibonacci(int num)
{
   int n1=0,n2=1,next=0;
   cout<<"Fibonacci Serise : ";
   for(int i=1; i<=num; i++)
   {
      if(i==1)
      {
         cout<<n1<<" ";
      }
      if(i==2)
      {
         cout<<n2<<" ";
      }
      next=n1+n2;
      cout<<next<<" ";
      n1=n2;
      n2=next;
   }
}

int main()
{
   int number;
   cin>>number;
   fibonacci(number);
}
