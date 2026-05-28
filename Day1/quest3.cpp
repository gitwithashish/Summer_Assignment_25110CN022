//Write a program to Find factorial of a number.
#include <iostream>
using namespace std;
int main(){
    int n;
    int fact=1;
    cout<<"Enter n:";
    cin>>n;
    for(int i=1;i<=n;i++){
         fact=fact*i;
    }
    cout<<"factorial of n:"<<fact ;
    return 0;
}