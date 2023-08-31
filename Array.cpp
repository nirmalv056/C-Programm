#include<iostream>
using namespace std;

int main(){
	int marks[]={45,55,66,77};
	
	int mathMarks[4];
	mathMarks[0]=225;
	mathMarks[1]=325;
	mathMarks[2]=425;
	mathMarks[3]=525;

	cout<<" 4 students marks"<<endl;
	cout<<"These are mathMarks"<<endl;
	cout<<mathMarks[0]<<endl;
	cout<<mathMarks[1]<<endl;
	cout<<mathMarks[2]<<endl;
	cout<<mathMarks[3]<<endl;

	cout<<"These are marks"<<endl;
	for(int i=0;i<4;i++){
		cout<<"the value of marks is: "<<marks[i]<<endl;
	}
	
	return 0;
}
