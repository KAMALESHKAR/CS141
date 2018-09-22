#include <iostream>
using namespace std;
//write the function to compare two numbers
void compare(int a, int b,int *g)
{
		if (a<b){*g=a;}else{*g=b;};
}
//write the function
int main()
{
		int a,b,k;
//ask the user for values
		cout <<"give two numbers";
		cin >>a >>b;
//call the above function to get result through reference
		compare(a,b,&k);	
//display the result
		cout <<k <<" is minimum of the two" <<endl;
//terminate	
		return 0;
}


