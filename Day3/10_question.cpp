//Write a program to Print prime numbers in a range.
#include <iostream>
using namespace std;
int main(){
    int m;//start
    int n;//end 
    cout<<"enter starting number m:";
    cin>>m;
    cout<<"enter ending number n:";
    cin>>n;
    for(int p=m;p<=n;p++){
         int count=0;
        if(p<=1)
        continue;
        for(int i=1;i<=p;i++){
            if(p%i==0)
            count++;
        }
        if(count==2)
        cout<<p<<" ";
    }
    return 0;
}