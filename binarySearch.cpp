#include <iostream>
using namespace std;

int binarySearch(int a[],int lb,int ub,int key)
{
    if(lb >ub)
        return -1;

    int mid = (ub+lb) / 2;

    if(a[mid] == key)
        return mid;
    else if(a[mid]<key)
        return binarySearch(a,mid+1,ub,key);
    else
        return binarySearch(a,lb,mid-1,key);
}

int main()
{
    int n;
    cout << "Enter no.of elements: ";
    cin >> n;

    int a[n];

    cout << "Enter sorted elements:"<<endl;
    for(int i=0;i<n;i++)
        cin >>a[i];

    int key;
    cout << "Enter key: ";
    cin >> key;

    int result = binarySearch(a, 0, n - 1, key);

    if(result!=-1)
        cout<<"Element found at position: "<< result+1;
    else
        cout<<"Element not found";


    return 0;
}