#include<iostream>
using namespace std;
int main(){
	int m_s,y_e;
	cout<<"Enter your monthly salary"<<endl;
	cin>>m_s; 
	cout<<"Enter your year of experience"<<endl;
	cin>>y_e;
	if(m_s>=50000 && y_e>=2)
	{
	cout<<"Eligible";
	}
	else if(m_s>=40000 && y_e>=3)
	{
	cout<<"Eligible";
	}
	else if (m_s>=30000 && y_e>=5)
	{
	cout<<"Eligible";
}
else 
{
cout<<"Not Eligible";
}
return 0;	
	}
