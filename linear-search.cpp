#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter no. of elements:";
    cin>>n;

    int a[n];
    cout<<"enter elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int key;
    cout<<"enter key: ";
    cin>>key;

    int index=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            index=i;
            break;
        }
    }
    if(index!=-1)
    {
        cout<<"element is found at index: "<<index+1;
    }
    else{
        cout<<"element not found";
    }
    return 0;
}