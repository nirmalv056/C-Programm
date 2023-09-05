#include<iostream>
using namespace std;

class Employee{
	int id;
	int salary;
	
	public:
		void setId(void){
			salary=120;
			cout<<"Enter the id of employee: "<<endl;
			cin>>id;
		}
		
		void getId(void){
			cout<<"The id of employee is: "<<id<<endl;
		}
};

int main(){
	Employee ABC[5];
	for(int i=0; i<5; i++){
		ABC[i].setId();
		ABC[i].getId();
	}
	return 0;
}
