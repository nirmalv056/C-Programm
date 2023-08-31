#include<iostream>
using namespace std;

int sum(int a, int b){
	return a+b;
}

int sum(int a, int b, int c){
	return a+b+c;
}

int main(){
	cout<<"The sum is: "<<sum(3,6)<<endl;
	cout<<"The sum is: "<<sum(5,6,7);
	
	return 0;
}
