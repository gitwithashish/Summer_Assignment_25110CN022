//Write a program to Check Armstrong number.
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,temp,digit,count=0,sum=0;
    cout<<"enter a number:";
    cin>>n;
    temp=n;
    while(n!=0){
        count++;
        n/=10;
    }
    n=temp;
    while(n!=0){
        digit=n%10;
        sum =sum+(int) (pow(digit, count) +0.5);
        n/=10;}
        cout<<"count:"<<count<<endl;
        cout<<"sum:"<<sum<<endl;
    if(sum==temp){
        cout<< temp <<" is an armstrong number";}
        else{
            cout<< temp <<" is not an armstrong number";}
    
    return 0;   
}