#include <iostream>
using namespace std;
int main() {
// Program 5: Dynamic Memory Allocation 
int* dynamicArray = new int[3];
dynamicArray[0] = 100;
dynamicArray[1] = 200;
dynamicArray[2] = 300;
cout << "Program 5: Dynamic Memory Allocation" << endl;
for (int i = 0; i < 3; i++) { 
	cout << "Element" << i << ": " << dynamicArray[i] << endl;
}
delete[] dynamicArray;
cout << endl;
}
