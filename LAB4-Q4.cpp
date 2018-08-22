//include the library
#include<iostream>
using namespace std;
//write the function
int main(){
cout <<"what is the number of days"<<endl;
//declare variable
int D;
//assign value to it via terminal which is the number of days
cin >>D;
//divide it by 365 to get yrs and divide the remainder by 7 to get weeks and now the remainder of this division gives days
cout <<D <<" DAYS = " <<D/365 <<" YEARS " <<(D%365)/7 <<" WEEKS " <<(D%365)%7 <<" DAYS";
//TERMINATE
return 0;}
