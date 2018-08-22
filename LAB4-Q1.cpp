//include the library
#include<iostream>
using namespace std;
//write the function
int main(){
cout <<"what is the length in centi meters"<<endl;
//declare variable
double L;
//assign value to it via terminal which is length in cm
cin >>L;
//divide by 100 to get length in  meter
cout <<"length in meter is "<<L/100<<endl;
//divide by 100000 to get length in km
cout <<"length in kilometer is "<<L/100000<<endl;
//TERMINATE
return 0;}
