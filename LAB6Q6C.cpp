#include<iostream>
using namespace std;
//function to get sum of squares
int sumSquareOddNumber(int v1,int v2)
{
		int sum=0;
		while (v2>=v1)
			{
				if (v1 %2==1)
				sum=sum+v1*v1;
				else
				sum=sum+0;
				v1++;
			}
		return sum;
}
int main()
{
//data input by the user
		int a,b;
		cout<<"Enter first and second number";
		cin>>a>>b;
//calling the function to get result
//display output
		cout<<"Sum of squares of odd numbers between is :"<<sumSquareOddNumber(a,b)<<endl;
		return 0;
}
