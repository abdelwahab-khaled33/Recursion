#include <iostream>

using namespace std;

void even_index(int arr[], int n, int index){
    if(index>=n) return;          // if the input is 3 nubers, when the index = 4,it will return to the previous index that is 2 then 0
    even_index(arr, n , index+2);
    cout<<arr[index]<<" ";
}
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
        even_index(arr, n , 0);

    return 0;
}
