

#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,res=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string str1="X++",str2 = "++X",str3="X--",str4 = "--X";
        string statement;
        cin>>statement;
        if(statement==str1 || statement==str2)
        {
            res++;
        }
        if(statement==str3|| statement==str4)
        {
            res--;
        }
    }
    cout<<res<<endl;
}
