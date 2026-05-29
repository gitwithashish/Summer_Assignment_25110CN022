//Write a program to Reverse a number. 
#include <iostream>
using namespace std;
int main(){
    int n;
    int rev=0;
    cout<<"Enter n:";
    cin>>n;
    while(n!=0){
   int digit=n%10;
   rev=rev*10+digit;
   n=n/10;
 }
 cout<<"reverse of number is "<<rev;
 return 0;
}
