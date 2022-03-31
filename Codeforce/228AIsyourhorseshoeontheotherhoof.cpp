
#include<iostream>
using namespace std;
int main()
{
    int s1,s2,s3,s4,count=1;
    cin>>s1>>s2>>s3>>s4;

    if(s1!=s2 && s1!=s3 && s1!=s4)
    {
        count++;
    }
      if(s2!=s3 && s2!=s4)
    {
        count++;
    }
    if(s3!=s4)
    {
        count++;
    }
    cout<<4-count<<endl;
    return 0;

}
