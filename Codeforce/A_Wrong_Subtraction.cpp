#include<iostream>
#include<string>
using namespace std;
int main()
{
    int number , times,res=0;
    cin>>number>>times;

    for(int i=0; i<times; i++)
    {
        int lastDigt = number%10;
        if(lastDigt==0){
            res=number/10;
        }else{
            res=number-1;
        }
        number=res;
    }
     cout<<res<<endl;
}
