#include <iostream>
using namespace std;

int main() {
    
    int n;
    cout<<"enter number of elements:";
    cin>>n;

    int a[n];
    cout<<"enter elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                cout<<"first duplicate: "<<a[i];
                return 0;
            }
        }
    }
    return 0;
}