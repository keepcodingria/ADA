#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter degree of polynomial:";
    cin>>n;

    int coff[n+1];
    
    cout<<"enter coff in non increasing order: ";
    for(int i=0;i<n+1;i++)
    {
        cin>>coff[i];
    }
int k;
cout<<"k: ";
cin>>k;

int ans=coff[0];

for(int i=1;i<n+1;i++)
{
    ans=ans*k+coff[i];
}
cout<<"result= "<<ans;
return 0;
}


   