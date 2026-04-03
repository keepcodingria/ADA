#include <iostream>
using namespace std;

void perm(string s, int l, int r);
int main() {
    string s;
    cout<<"enter string:";
    cin>>s;

    perm(s,0,s.length()-1);
    
    return 0;
}

void perm(string s, int l, int r)
{
    if(l==r)
    {
        cout<<s<<endl;
    }
    else{
        for(int i=1;i<=r;i++)
        {
            swap(s[1],s[i]);
            perm(s,1+l,r);
            swap(s[l],s[i]);
        }
    }
}