#include <iostream>
using namespace std;
int main(){
//Program 7: Pointer to Pointer
int value = 42;
int* ptr1 = &value;
int** ptr2 = &ptr1;
cout << "Program 7: Pointer to Pointer" << endl; 
cout << "Value of value: " << value << endl; 
cout << "Value of ptri: "<< *ptr1 << endl; 
cout << "Value of ptr2: "<< **ptr2 << endl; 
cout << endl;
}
