#include <iostream>
using namespace std;
int main() {
//Program 2: Pointer Arithmetic ;
int arr[5] = {10, 20, 30, 40, 50};
int* arrPtr = arr;
cout << "Program 2: Pointer Arithmetic" << endl; 
cout << "Element at arrptr: " << *arrPtr << endl;
cout << "Next element: " << *(arrPtr + 1) << endl;
cout << "Previous element: " << *(arrPtr - 1) << endl;
cout << endl;
}
