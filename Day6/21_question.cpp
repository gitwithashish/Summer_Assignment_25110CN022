//Write a program to Convert decimal to binary. 
#include<iostream>
using  namespace std;
int main(){
    int n,rem,ans=0,pow=1;
    cout<<"enter n: ";
    cin>>n;
    while(n>0){
      rem=n%2;
      n=n/2;
      ans+=rem*pow;
      pow*=10;
    }
    cout<< "binary=" <<ans;
    return 0;
}