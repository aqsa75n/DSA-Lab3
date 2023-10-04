#include <iostream> 
using namespace std;
int main(){
// Program 8: Pointers to Objects 
	class MyClass {
	public:
		void display() {
			cout << "Hello from MyClass!" << endl;
		};
};
MyClass obj;
MyClass* objPtr = &obj;
cout << "Program 8: Pointers to Objects" << endl;
objPtr->display();
cout << endl;
}
