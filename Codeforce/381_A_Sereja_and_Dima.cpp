#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main() {
    int n,evenAdd=0,oddAdd=0;
    cin>>n;
    int arr[1000];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    for(int i=0; i<n; i++) {
        if(i%2==0) {
            evenAdd=evenAdd+arr[i];
        }
         else {
            oddAdd=oddAdd+arr[i];
        }
    }

    int maX = max(evenAdd,oddAdd);
    int miN = min(evenAdd,oddAdd);
    cout<<maX<<" "<<miN;
    return 0;
}
