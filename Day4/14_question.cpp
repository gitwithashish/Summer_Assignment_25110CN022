//Write a program to Find nth Fibonacci term. 
#include <iostream>
using namespace std;
int main(){
  int a=0,b=1;
    int c,n;
     cout<<"enter n for nth term:";
     cin>>n;
    for(int i=1;i<=n;i++){
       if(i==n){
        cout<<"nth fibonacci term is: "<< a;}
       c=a+b;
       a=b;
       b=c;}
         return 0;  
}
