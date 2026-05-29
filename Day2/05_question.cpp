//Write a program to Find sum of digits of a number. 
#include <iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Enter n:";
    cin>>n;
    while(n!=0){
   int digit=n%10;
   sum=sum+digit;
   n=n/10;
 }
 cout<<"sum of digits is "<<sum;
 return 0;
}