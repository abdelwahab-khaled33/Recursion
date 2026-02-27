#include <iostream>
#include <string>
using namespace std;

void pyramid(int n, int h){
    if(h>n) return;
    cout<<string(n-h, ' ')<< string((2*h-1), '*')<<endl;
    pyramid(n , h+1);
}
int main()
{
    int n;
    cin>>n;

    pyramid(n, 1);
    return 0;
}
