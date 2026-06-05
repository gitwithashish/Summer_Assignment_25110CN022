//Write a program to Find largest prime factor. 
#include <iostream>
using namespace std;
int main(){
    int n,temp;
    cout<<"ENTER THE NUMBER : ";
    cin>>n;
    temp=n;
    int i=2;

    while(n>1){
        if(n%i==0){
            n=n/i;
        } else {
            i++;
        }
    }
    cout<<"THE LARGEST PRIME FACTOR OF " <<temp<<" IS " <<i;

    return 0;
}
