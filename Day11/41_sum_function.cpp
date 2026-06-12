#include <iostream>
using namespace std;

int addition(int &x, int &y)
{
    return (x + y);
}

// main function for verification
int main()
{
    int a,b;
    cout<<"enter a and b:";
    cin>>a>>b;
    cout << addition(a, b) << endl;
    return 0;
}