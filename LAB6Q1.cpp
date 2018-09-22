#include<iostream>
using namespace std;
//FUNCTION TO OBTAIN VALUES FROM USER
void value(double& unit,double& unitcst,double& taxrt)
{	cout <<"enter no. of units";
	cin >>unit;
	cout <<"enter cost per unit";
	cin >>unitcst;
	cout <<"tax rate in percentage";
	cin >>taxrt;
}
//FUNCTION TO GET TAX AND TOTAL(TAX=TAXRT*UNITS*UNITCOST)
void taxntotal(double unit,double unitcst,double taxrt,double& tax,double& total)
{
	value(unit,unitcst,taxrt);
	tax=unit*unitcst*taxrt/100;
	total=unit*unitcst+tax;
}
//FUNCTION TO GIVE OUTPUT IN A VERYV READABLE FORMAT
void result(double unit,double unitcst,double taxrt,double tax,double total)
{
	taxntotal(unit,unitcst,taxrt,tax,total);
	cout <<"the sales tax on your purchase is = " <<tax <<endl;
	cout <<"the total amount you have to pay is = " <<total <<endl;
}
//WRITING MAIN FUNCTION AND CALLING THE VOID FUNCTIONS TO OPERATE.
int main()
{
	double unitspurchased,unitcost,taxrate,salestax,totaldue;
	result(unitspurchased,unitcost,taxrate,salestax,totaldue);
	return 0;
}
