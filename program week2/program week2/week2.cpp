#include <iostream>
#include <string>
using namespace std;
int main(){
	string name,GPA ;
	float score1,score2,total,grade;
	//input data
	cout << "Input name : ";
	getline(cin,name,'\n');
	cout << "Input Score 1 : ";
	cin >> score1;
	cout << "Input Score 2 : ";
	cin >> score2;
	cout << "Input GPA : ";
	cin >> GPA;
	cout << "Input Grade : ";
	cin >> grade;
	
	cout << endl;
	total = score1 + score2;
	cout << endl;

	cout << "My name is : " << name << endl;
	cout << "My score 1 : " <<score1 << endl;
	cout << "My score 2 : " <<score2 << endl;
	cout << "Total : " << total << endl;
	cout << "Grade : " << grade<< endl;
	cout << "GPA : " << GPA << endl;
}