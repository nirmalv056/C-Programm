#include<iostream>
#include<string>
using namespace std;

class binary{
	string s;
	public:
		void read(void);
		void check_binary(void);
};

void binary::read(void){
	cout<<"Enter a binary number: ";
	cin>>s;5
}

void binary::check_binary(void){
	for(int i=0; i<s.length(); i++){
		if(s.at(i)!='0' && s.at(i)!='1'){
			cout<<"Incorrect binary format."<<endl;
			exit(0);
		}
	}
}

int main(){
	binary b;
	b.read();
	b.check_binary();
	
	return 0;
}
