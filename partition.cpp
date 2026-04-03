#include <iostream>
using namespace std;

int partition(int a[],int lb,int ub)
{
    int pivot = a[ub];  
    int i = lb-1;

    for(int j = lb; j <ub; j++)
    {
        if(a[j]<=pivot)
        {
            i++;
            int temp = a[i];
            a[i] = a[j];
            a[j] =temp;
        }
    }

    int temp = a[i+1];
    a[i+ 1] = a[ub];
    a[ub] = temp;

    return i+1; 
}

int main()
{
    int n;
    cout << "Enter no. of elements: ";
    cin>>n;

    int a[n];

    cout <<"Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int index = partition(a, 0,n-1);

    cout << "elements after partition:\n";
    for(int i = 0; i < n; i++)
        cout << a[i] <<" ";

    cout<<endl<< "Pivot index = " << index;

    return 0;
}