#include <iostream>
using namespace std;
int main() {

// Program 1: Introduction to Pointers
int num= 42;
int* ptr = &num;
cout<<"Program 1: Introduction to Pointers" << endl;
cout << "Value of num: " << num << endl;
cout << "Address of num: " << &num << endl; 
cout << "Value of ptr: "<< *ptr << endl;
cout << "Address stored in ptr: "<< ptr << endl; 
cout << endl;
}
