#include<iostream>
using namespace std;

int main(){
	int day;
	
	cout<<"Enter your day: ";
	cin>>day;

	switch(day){
		case 1:
				cout<<"Today is Monday.";
				break;
						
		case 2:
				cout<<"Today is tuesday.";
				break;	
			
		case 3:
				cout<<"Today is wednesday.";
				break;
				
		case 4:
			cout<<"Today is thursday.";
			break;
			
		case 5:
			cout<<"Today is friday.";
			break;
			
		case 6:
			cout<<"Today is saturday.";
			break;
			
		case 7:
			cout<<"Today is sunday.";
			break;
			
		default:
			cout<<"Invalid day.";
			}
		return 0;
	}
