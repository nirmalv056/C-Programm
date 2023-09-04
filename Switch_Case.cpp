#include<iostream>
using namespace std;

int main(){
	int age;
	
	cout<<"Enter your age: ";
	cin>>age;

	switch(age>18){
		case 1:
				cout<<"Your age is greater than 18 then, you are young.";
				break;
						
		case 2:
				cout<<"You are not a young guy.";
				break;	
			
		default:
				cout<<"You are child.";
				break;
			}
		return 0;
	}
