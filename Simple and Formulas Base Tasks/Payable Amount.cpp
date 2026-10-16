#include<iostream>
using namespace std;
int main (){
	float LA, IR, TPA, PF, IA;
	cout<<" Enter loan amount"<<endl;
	cin>>LA;
	cout<<" Enter interest rate"<<endl;
	cin>>IR;
	cout<<" Enter processing fee"<<endl;
	cin>>PF;
	cout<<" Enter interest amount"<<LA+IR/100<<endl;
	cin>>IA;
	cout<<" Total payable amount"<<IR+PF<<endl;
	cin>>TPA;
	if(TPA>100000)
	{
		cout<<" apply 2% penalty"<<TPA*2/100<<endl;
	}
else
{
	cout<<" apply 1% penalty";
	}	
	return 0;	
}

