
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int ch;

    cout <<"1) v= distance/time"<<endl;
    cout <<"2) v= u+at"<<endl;
    cout <<"3) v^= u^2 + 2as"<<endl;
    cout <<"Enter choice: ";
    cin >> ch;

    if(ch==1)
    {
        float d,t,v;
        cout <<"Enter distance: ";
        cin>>d;
        cout<<"Enter time: ";
        cin>>t;

        if(t==0)
        {
            cout<<"Time can't be zero";
        }
        else
        {
            v = d / t;
            cout << "Velocity= "<<v;
        }
    }
    else if(ch == 2)
    {
        float u,a,t,v;
        cout<<"enter initial velocity: ";
        cin>>u;
        cout<<"Enter acceleration: ";
        cin >>a;
        cout<<"enter time: ";
        cin>>t;

        v = u+ a * t;
        cout << "final Velocity = " << v;
    }
    else if(ch == 3)
    {
        double u, a, s, v;
        cout<<"Enter initial velocity: ";
        cin>> u;
        cout << "enter acceleration: ";
        cin >> a;
        cout <<"Enter displacement: ";
        cin>> s;

        v = sqrt(u*u + 2*a*s);
        cout << "Final Velocity = " << v;
    }
    else
    {
        cout <<"Wrong choice";
    }

    return 0;
}