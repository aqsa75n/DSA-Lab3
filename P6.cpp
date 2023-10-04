#include <iostream>
using namespace std;
int main(){
// Program 9: Pointers and Arrays 
int array[] {10, 20, 30}; 
int* p= array;

cout << "Program 9: Pointers and Arrays" << endl;
cout << "Array Element 0: " << *p << endl; 
cout << "Array Element 1: " << *(p + 1) << endl;
cout << "Array Element 2: " << *(p+ 2) << endl;
cout << endl;
}
