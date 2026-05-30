//Write a program to Find GCD of two numbers.
#include <iostream>
using namespace std;
int main(){
    int a,b,min,gcd=1;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    if(a<b)
        min=a;
    else
        min=b;
        
        for(int i=1;i<=min;i++){
        if(a%i==0&&b%i==0){
        gcd=i;
        }
    }
     cout<<"GCD of two number is "<<gcd;
    return 0;
}