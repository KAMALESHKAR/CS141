//include the library
#include<iostream>
#include<cmath>
using namespace std;
//write the function
int main(){
//DECLARE TWO VARIABLES AND ASSIGN VALUE THROUGH TERMINAL
int a;
cin >> a;
//CHECK IF INPUT IS DIVISIBLE BY BOTH 5 AND 11 AND SHOW THE SAME
if ((a%5==0)&&(a%11==0)){cout <<a <<" is divisible by both 5 and 11";}
else if (a == 0){cout <<"it is zero";}
else {cout <<a <<" is not divisible by both 5 and 11" <<endl;}
//TERMINATE
return 0;}
