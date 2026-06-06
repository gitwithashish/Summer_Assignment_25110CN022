//Write a program to Convert binary to decimal. 
#include<iostream>
using  namespace std;
int main(){
    int n,rem,ans=0,pow=1;
    cout<<"enter binary number n: ";
    cin>>n;
    while(n>0){
      rem=n%10;
      n=n/10;
      ans+=rem*pow;
      pow*=2;
    }
    cout<< "decimal=" <<ans;
    return 0;
}