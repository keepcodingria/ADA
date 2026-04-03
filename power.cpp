#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float base,exponent;

    cout <<"Enter base:";
    cin >>base;

    cout<<"Enter exponent:";
    cin>>exponent;

    float result = pow(base,exponent);

    cout<<"Power= "<<result;

    return 0;
}