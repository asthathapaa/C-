#include<iostream>
using namespace std;
inline int mult(int a,int b)
{
    return a*b;
}
inline float div(float c,float d)
{
    return (float)(c/d);
}
int main()
{
    int a,b;
    float c,d;
    cout<<"enter the number a,b,c,d"<<endl;
    cin>>a>>b>>c>>d;
    cout<<"the multiplication is"<<mult(a,b)<<endl;
    cout<<"the division is"<<div(c,d);
}
