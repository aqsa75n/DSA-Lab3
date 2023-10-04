#include <iostream>
using namespace std;
int main(){
// Program 11: Pointers to Constant Data
const int constValue = 100;
const int* constPtr = &constValue;
cout << "Program 11: Pointers to Constant Data" << endl; 
cout << "Value of constValue: " << constValue << endl; 
cout << "Value of constPtr: "<< *constPtr << endl;
cout << endl;
}
