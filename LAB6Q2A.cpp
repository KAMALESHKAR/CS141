#include <iostream>
using namespace std;
//WRITE FUNCTION TO ADD
int SUM (int a, int b)
{
	int sum;
	sum = a + b;
	return (sum);
}


//WRITING MAIN FUNCTION
int main()
{
	int a,b;
//ASKING VALUES TO THE USER
	cout <<"give the two numbers you want to add";
	cin >>a >>b;
//calling the above function by value
	int sum = SUM(a,b);
//displaying the result on screen
	cout << "the sum is "<< sum <<endl;
	return 0;
}
