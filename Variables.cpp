#include <iostream>
using namespace std;
int main(){
    cout<<"Please enter your name (followed by enter):\n";
    string first;
    cin>>first;
    cout<<"Hello, "<<first<<"!\n";
    cin>>first;
    cout<<first;
    return 0;
}