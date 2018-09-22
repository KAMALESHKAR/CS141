#include<iostream>
using namespace std;
//writing void function with reference parameter
void sum(int a, int b, int *s)
{
   	*s = a + b;
}
//writing main function
int main() {
//declare variables to be added
    int a, b, result;
//ask user for numbers to be added
    cout << "Enter Two Numbers :";
    cin >> a>>b;
//call the above function and get result through reference
    sum(a, b, &result);
//display the result
    cout << "The Sum is:" <<result <<endl;
//terminate
    return 0;
}


