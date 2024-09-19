#include<iostream>
using namespace std;
int main()
{
int numbers [5];
cout<<"Enter 5 Numbers:"<<endl;
for (int i=0;i<5;i++)
{
cin>>numbers[i];
}
cout<<"The numbers are:";
for (int i=4; i>=0;i--)
{
cout<<"\n"<<numbers[i];
}
return 0;
}
