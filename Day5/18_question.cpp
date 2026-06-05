//Write a program to Check strong number. 
#include <iostream>
using namespace std;
int main(){
   int n,sum=0;
    cout<<"Enter a number:";
    cin>>n;
    int temp=n;
   while(n!=0){
    int fact=1;
    int digit=n%10;
    for(int i=1;i<=digit;i++){
        fact=fact*i;}
     sum +=fact;
     n=n/10; }
    if(sum==temp){
     cout<<temp<<" is a strong number.";}
    else{
     cout<<temp<<" is not a strong number.";}
    return 0; 
}