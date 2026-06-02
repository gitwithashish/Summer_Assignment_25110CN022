//Write a program to Generate Fibonacci series.
#include <iostream>
using namespace std;
int main(){
    int a=0,b=1;
    int c,n;
     cout<<"enter number of term:";
     cin>>n;
    for(int i=1;i<=n;i++){
       cout<<" "<< a;
       c=a+b;
       a=b;
       b=c;}
         return 0;}
