//include the library
#include<iostream>
#include<cmath>
using namespace std;
//write the function
int main(){
//DECLARE TWO VARIABLES AND ASSIGN VALUE THROUGH TERMINAL
double a ,b ,c;
cin >> a >> b >>c;
if (a > b && a >= c){cout <<a <<" is greatest";}
else if (a == b && b == c){cout <<"all are equal";}
else if (b > a && b > c) {cout <<b <<" is greatest";}
else {cout <<c <<" is greatest" <<endl;}
//TERMINATE
return 0;}
