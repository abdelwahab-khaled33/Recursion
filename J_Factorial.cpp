#include <iostream>

using namespace std;

void factorial(long long n, int f){
    if(f==0){
        cout<<n;
        return;
    }
    if(f>1)
    n*=f-1;
    factorial(n, f-1);
}
int main()
{
    long long n;
    cin>>n;

    factorial(n, n);
    return 0;
}
