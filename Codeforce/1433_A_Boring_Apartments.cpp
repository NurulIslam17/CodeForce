
#include<iostream>
using namespace std;


int main() {

    int t;
    cin>>t;
    while(t--) {
        int n,countDigit = 0,rem=0;
        cin>>n;
        int last = n%10;
        int pressedDigit=10*(last-1);

        int i=0;
        while(n!=0) {
            rem=n%10;
            n=n/10;
            countDigit++;
            i++;
        }

        if(countDigit==1) {
            pressedDigit+=1;
        } else if(countDigit==2) {
            pressedDigit+=3;
        } else if(countDigit==3) {

            pressedDigit+=6;
        } else if(countDigit==4) {
            pressedDigit+=10;
        }

        cout<<pressedDigit<<endl;
    }

}
