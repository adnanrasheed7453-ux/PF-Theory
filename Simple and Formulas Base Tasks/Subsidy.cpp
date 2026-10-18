#include <iostream>
using namespace std;
int main (){
	float consumeunit, costperunit, Totalbill, subsidyAmount;
	int subsidyper;
	cout<< "Enter consume no of units"<<endl;
    cin>> consumeunit;
    cout<< "Enter cost per unit"<<endl;
    cin>> costperunit;
    cout<< "Enter subsidy persentage"<<endl;
    cin>> subsidyper;
    Totalbill=consumeunit*costperunit;
    if(consumeunit<=300);
    {
    	subsidyper=Totalbill*subsidyper/100;
	} 
	cout<<"your total bill is "<<Totalbill<<endl;
	cout<<"Total subsidy amaount is "<<subsidyper<<endl;
	cout<<"your total bill after subsidy is "<<Totalbill-subsidyAmount<<endl;
	return 0;
	
     
}
