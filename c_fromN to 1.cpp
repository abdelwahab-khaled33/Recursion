#include <iostream>

using namespace std;


void print(int n){
    if(n<=0) return;
    else if(n==1){
        cout<<n;
        return;
    }
    cout<<n<<" ";
    n--;
    print(n);

}
int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;
}
