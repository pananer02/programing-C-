#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(){
	cout << "hello Sec A\n" << endl;
	cout << "We will graduate in 4 years\n" << endl;
	cout << "Am \'I See \"IT \\ A\"?" << endl;
	cout << setw(50)<< "Hello\n";
	cout << setw(50)<< "This is Turbo C++ Program."<<endl;
	cout << setw(45)<< "It is very easy."<<endl;
	cout << setw(41)<< "I love C++."<<endl;
	cout << setw(50)<< "It \'s high level language."<<endl;
	cout << endl;
	cout << "\'A\' is Character.\n";
	cout << "A = \101 = \x41 \n";
	cout << "My nickname is : " <<(char)84<<(char)73<<(char)71<<(char)69<<(char)82<<endl;
	cout << endl;
	string name = "tiger" ;
	char sex = 'M';
	short age = 20;
	char section = 'A';
	float grade = 4.00;

	cout << "name : "<<name <<endl;
	cout << "sex : "<<sex <<endl;
	cout << "age : "<<age <<endl;
	cout << "section : "<<section <<endl;
	cout << "grade : "<<grade <<endl;

	string Str;
	cout << "Enter String : ";
	getline(cin,Str,'\n');
	cout << endl;
	cout << "Your string enter : " << Str << endl;
	cout << "Length of string = " << Str.length() << endl;
	for (int n = 0 ; n < Str.length() ; n++){
		cout << "Position " << n << " = " << Str.at(n) << endl;
	}
	return(0);
}