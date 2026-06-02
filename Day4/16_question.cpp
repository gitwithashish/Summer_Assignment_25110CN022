//Write a program to Print Armstrong numbers in a range. 
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int start,last;
    cout<<"enter starting number:";
    cin>>start;
    cout<<"enter last number:";
    cin>>last;
    for(int n=start;n<=last;n++){
        int temp=n,digit,count=0,sum=0;
        int t=n;
    while(t!=0){
        count++;
        t/=10;
    }
    t=n;
    while(t!=0){
        digit=t%10;
        sum =sum+(int) (pow(digit, count) +0.5);
        t/=10;}
    if(sum==n){
        cout<< n<<" ";}
        
        }
    return 0;   
}
