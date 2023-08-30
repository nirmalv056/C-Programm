#include<iostream>
using namespace std;

int main(){
	int a=5;
	int b=6;
	
	cout<<"The value of the logical and operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
	cout<<"The value of the logical and operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;
	cout<<"The value of the logical and operator (!(a==b)) is: "<<(!(a==b))<<endl;

return 0;
}
