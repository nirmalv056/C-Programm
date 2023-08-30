#include<iostream>
using namespace std;

int main(){
	int a=35;
	int b=37.55;
	
	cout<<"The value of a is: "<<(float)a<<endl;
	cout<<"The value of a is: "<<float(a)<<endl;
	
	cout<<"The value of b is: "<<(int)b<<endl;
	cout<<"The value of  is: "<<int(b)<<endl;
	
	cout<<"The expression is: "<<a+b<<endl;
	cout<<"The expression is: "<<a+int(b)<<endl;
	cout<<"The expression is: "<<a+(int)b<<endl;
	
	return 0;
	}
