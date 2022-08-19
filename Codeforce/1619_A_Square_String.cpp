#include<iostream>
#include<string>
using namespace std;

void solve(string str)
{
   int len = str.length();
   //cout<<len<<endl;

   if(len%2==0)
   {
      int n=len;
      int c=0;
      len/=2;
     // cout<<n<<" >> "<<len<<endl;
      for(int i=0; i<n; i++)
      {
         if(str[i]==str[len+i])
         {
            //cout<<str[i] <<" : "<<str[len+i]<<endl;
            c++;
         }
      }

      if(c==len)
      {
         cout<<"YES"<<endl;
      }
      else{
         cout<<"NO"<<endl;
      }

   }
   else{
      cout<<"NO"<<endl;
   }
}

int main()
{
   int t;
   cin>>t;
   string str;

   while(t--)
   {
      cin>>str;
      solve(str);
   }
}
