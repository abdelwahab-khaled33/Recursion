#include <iostream>

using namespace std;



void digits(long long n){
    if(n<10){
        cout<<n<<" ";
        return;
    }
    digits(n/10);
    cout<<n%10<<" ";

}
int main()
{
    int t;
    cin>>t;

    long long arr[t];
   for(int i=0;i<t;i++){
    cin>>arr[i];
   }
    for(int i=0;i<t; i++){
        if(arr[i]==0) cout<<0<<endl;
        else{
            digits(arr[i]);
            if(i<t-1)
            cout<<endl;
        };
    };

    return 0;
}
