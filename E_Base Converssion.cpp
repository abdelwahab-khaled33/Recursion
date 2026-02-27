#include <iostream>

using namespace std;

void binary(int n){

    if(n/2==0){
      cout<<"1";
      return;
    }
    binary(n/2);
    cout<<n%2; /* if the n =10, n/2 will be-> 5 2 1 0, cout<<n%2; will be excuted after the return in the if condition,

    return means go back, so it will read 1 2 5, so it will cout 010, we should print number '1' in the if condition before go back

    */
}
int main()
{
    int t;
    cin>>t;
    int arr[t];

    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    for(int i=0;i<t;i++){
        binary(arr[i]);
        cout<<endl;
    }
    return 0;
}
