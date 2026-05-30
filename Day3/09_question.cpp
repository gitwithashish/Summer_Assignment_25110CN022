//Write a program to Check whether a number is prime. 
#include <iostream>
using namespace std;
int main(){
    int n;
    int count=0;
    cout<<"Enter n:";
    cin>>n;
    if(n<=1){
        cout<<"it is not prime number";
        return 0;
    }
    for(int i=1;i<=n;i++){
     if(n%i==0){
        count++;}}
        if(count==2){
            cout<<"it is prime number";}
            else{
              cout<<"it is not prime number";
            }
            return 0;
}