#include<iostream>
using namespace std;
int main()
{
int r_a;
cout<<"Enter your recharge amount"<<endl;
cin>>r_a;
if(r_a>=500)
{
cout<<"Premium Package Activated"<<endl;
}
else if(r_a>=300)
{
cout<<"Standard Package Activated"<<endl;
}
else if(r_a>=100)
{
cout<<"Basic Package Activated";
}
else
{
cout<<"Insufficient";
}
return 0;
}
