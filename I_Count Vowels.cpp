#include <iostream>

using namespace std;

void vowels(string s,int counter,int index){
    if(index==s.size()){ // or .length() to get num of chars
        cout<<counter;
        return;
    }
    if(s[index]=='a' || s[index]=='e' || s[index]=='i' || s[index]=='o' || s[index]=='u' || s[index]=='A' || s[index]=='E' || s[index]=='I' || s[index]=='O' || s[index]=='U' ) counter++;
    vowels(s, counter, ++index);
}
int main()
{
    string s;
    getline(cin, s); // cin only tak chars till the space "a k" it will take a only, get line respect spaces, if you used cin before getline you should use cin.ignore();

    vowels(s, 0, 0);
    return 0;
}
