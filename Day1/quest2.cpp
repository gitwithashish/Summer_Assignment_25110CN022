//Write a program to Print multiplication table of a given number.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n of whichtable is to be calculated:";
    cin>>n;
    for(int i=1;i<=10;i++){
        cout<<(n*i)<<" ";
    }
return 0;
}