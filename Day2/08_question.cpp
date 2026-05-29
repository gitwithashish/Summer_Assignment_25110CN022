//Write a program to Check whether a number is palindrome. 
#include <iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Enter n:";
    cin>>n;
    int temp=n;
    while(n!=0){
   int digit=n%10;
   sum=sum*10+digit;
   n=n/10;
 }
 if(temp==sum){
 cout<<" Number is palindrome";}
 else{
 cout<< "it is not palindrome";}
  return 0;
}