#include<iostream>
using namespace std;


struct employee{
	int eId;
	char favChar;
	float salary;
};

int main(){
	struct employee nirmal;
	nirmal.eId=001;
	nirmal.favChar='N';
	nirmal.salary=12000;
	
	cout<<"The value is: "<<nirmal.eId<<endl;
	cout<<"The value is: "<<nirmal.favChar<<endl;
	cout<<"The value is: "<<nirmal.salary<<endl;

	
	return 0;
}
