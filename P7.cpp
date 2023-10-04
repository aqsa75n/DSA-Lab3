#include <iostream>
using namespace std;
int main(){
// Program 10: Dynamic Memory Allocation for Objects
	class Person {
	public:
		string name;
		int age;
	};
	Person* personPtr = new Person; 
	personPtr->name = "Aqsa";
	personPtr->age = 20;
	cout << "Program 10: Dynamic Memory Allocation for Objects" << endl; 
	cout << "Name: "<< personPtr->name << ", Age: " << personPtr->age << endl; 
	delete personPtr;
	cout << endl;
}
