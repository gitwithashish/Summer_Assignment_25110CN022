#include <iostream>
using namespace std;

int maximum( int &x , int & y){
    return x>y?x:y;
}

int main(){
        int a,b;
    cout<<"enter a and b:";
    cin>>a>>b;

    cout << maximum(a,b) << endl;
    return 0;
}