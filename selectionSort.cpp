#include <iostream>
using namespace std;

int main()
{
    int n,minIndex;
cout<<"enter number of elements:";
cin>>n;

int arr[n];
cout<<"enter elements:"<<endl;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}

for(int i=0;i<n-1;i++)
{
    minIndex=i;

    for(int j=i+1;j<n;j++)
    {
       if(arr[j]<arr[minIndex])
{
    minIndex=j;
}
    }


int temp=arr[i];
arr[i]=arr[minIndex];
arr[minIndex]=temp;
}
cout<<"sorted: "<<" ";
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}