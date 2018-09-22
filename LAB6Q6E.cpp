#include<iostream>
using namespace std;
//function to get sum of even numbers between
int sumEvenNumber(int v1,int v2)
{
		int sum=0;
		for(sum=0;v2>=v1;v1++)
			{
				if(v1%2==0)
				sum=sum+v1;
				else
				sum=sum+0;
			}
		return sum;
}
//function to get sum of odd numbers between
int sumOddNumber(int v1,int v2)
{
		int sum=0;
		for(sum=0;v2>=v1;v1++)
			{
				if(v1%2==1)
				sum=sum+v1;
				else
				sum=sum+0;
			}
		return sum;
}
//function to get sum of square of even numbers between
int sumSquareEvenNumber(int v1,int v2)
{
		int sum=0;
		for(sum=0;v2>=v1;v1++)
			{
				if(v1%2==0)
				sum=sum+v1*v1;
				else
				sum=sum+0;
			}
		return sum;
}
//function to get sum of square of odd numbers between
int sumSquareOddNumber(int v1,int v2)
{
		int sum=0;
		for(sum=0;v2>=v1;v1++)
			{
				if(v1%2==1)
				sum=sum+v1*v1;
				else
				sum=sum+0;
			}
		return sum;
}
int main()
{
//asking the user for input
		int a,b,sumEven,sumOdd,sumSquareEven,sumSquareOdd;
		cout<<"Enter First and Second Number";
		cin>>a>>b;
//calling or using the above functions to get the results
		sumEven=sumEvenNumber(a,b);
		sumOdd=sumOddNumber(a,b);
		sumSquareEven=sumSquareEvenNumber(a,b);
		sumSquareOdd=sumSquareOddNumber(a,b);
//displaying the results
		cout<<"Sum Of Even Numbers between is :"<<sumEven<<endl;
		cout<<"Sum of Odd Numbers between is :"<<sumOdd<<endl;
		cout<<"Sum of square of Even Numbers between is :"<<sumSquareEven<<endl;
		cout<<"Sum of square of Odd Numbers between is :"<<sumSquareOdd<<endl;
		return 0;
}
