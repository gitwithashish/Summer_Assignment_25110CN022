//Write a program to Find product of digits. 
#include <iostream>
using namespace std;
int main(){
        int n;
    int product=1;
    cout<<"Enter n:";
    cin>>n;
    while(n!=0){
   int digit=n%10;
   product=product*digit;
   n=n/10;
 }
 cout<<"product of digits is "<<product;
 return 0;
}

