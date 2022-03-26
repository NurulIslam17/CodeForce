#include<iostream>
using namespace std;

int main()
{
    int n,pass=0;
    cin>>n;
    pass=n/5;
    if(n%5>0){
        pass++;
    }
    cout<<pass<<endl;
}
