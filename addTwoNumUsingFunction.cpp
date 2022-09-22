#include<iostream>
using namespace std;
int add(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}
int main()
{
    int n1,n2;
    cout<<" enter the two number : ";
    cin>>n1>>n2;
    cout<<"sum = "<<add(n1,n2);
}