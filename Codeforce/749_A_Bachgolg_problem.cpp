#include<iostream>
using namespace std;

void bachgoldProblem(int num)
{
   if(num%2==0)
   {
      num/=2;
      cout<<num<<endl;
   }
   else{
      num/=2;
      num--;
      cout<<num+1<<endl<<3<<" ";
   }

   for(int i=0; i<num; i++)
   {
      cout<<2<<" ";
   }
}

int main()
{
   int n;

   cin>>n;
   bachgoldProblem(n);
   return 0;
}
