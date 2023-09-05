#include<iostream>
using namespace std;

class Employee{
	int id;
	static int count;
	    
	public:
		void setData(void){
			cout<<"Enter the id: "<<endl;
			cin>>id;
			count++;
		}
		void getData(void){
			cout<<"The id of this employee is "<< id<<" and this is employee number "<<count<<endl;
		}
};

int Employee:: count;

int main(){
	Employee nirmal,pawan,suman;
	
	nirmal.setData();
	nirmal.getData();
	
	pawan.setData();
	pawan.getData();
	
	suman.setData();
	suman.getData();
	
	return 0;
}
