#include <iostream>
using namespace std;
//write the function to compare
int compare(int a, int b)
{
		int k;
		if (a>b){k=a;}else{k=b;};
		return (k);	
}
//write the main function!!
int main()
{
		int a,b;
//ask the user for values
		cout <<"give two numbers";
		cin >>a >>b;
		int greatest= compare(a,b);
//display the result
		cout <<greatest <<" is maximum of the two" <<endl;
		return 0;
}


