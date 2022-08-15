#include<iostream>
using namespace std;

void cubeSolve(int num) {
    int sum=0,sum2=0,countIt=0;
    int i=1;
    while(sum2<=num) {
        sum+=i;
        sum2+=sum;
         if(sum2<num || sum2==num)
         {
              countIt++;
         }
        //cout<<"sum : "<<sum<<endl;
        //cout<<"sum2 : "<<sum2<<endl;
       // cout<<"count : "<<countIt<<endl;
        //cout<<sum2<<"<="<<num<<endl;
        //cout<<endl;
        i++;
    }
    cout<<countIt<<endl;
}

int main() {
    int n;
    cin>>n;
    cubeSolve(n);
}
