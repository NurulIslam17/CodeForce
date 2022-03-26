#include<iostream>
using namespace std;

int main()
{
    int problemNumber,Petya, Vasya ,Tonya,res=0;

    cin>>problemNumber;

    for(int i=0;i<problemNumber;i++)
    {
        cin>>Petya>> Vasya >>Tonya;
        if(Petya+Vasya+Tonya>=2)
        {
          res++;
        }
    }
    cout<<res<<endl;

    return 0;
}
