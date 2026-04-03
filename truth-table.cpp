#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int n;
    cout<<"enter no. of inputs:";
    cin>>n;

    int rows=pow(2,n);

    for(int i=0;i<rows;i++)
    {
        for(int j=n-1;j>-1;j--)
        {
            cout<<((i>>j)&1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}