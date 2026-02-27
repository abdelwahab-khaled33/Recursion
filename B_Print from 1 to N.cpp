#include <iostream>

using namespace std;

    int x=1;

void print(int n){
    if(n<=0) return;

    cout<<x<<endl;
    x+=1;
    print(n-1);

}
int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;
}
