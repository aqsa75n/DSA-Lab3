#include <iostream>
using namespace std;
int main(){
// Program 12: Pointers to Arrays with Dynamic Memory Allocation
int size=4;
int* dynamicArr = new int[size];
cout << "Program 12: Pointers to Arrays with Dynamic Memory Allocation" << endl;
for (int i; i < size; i++) { 
dynamicArr[i]= i * 10;
cout<<"Element" << i << ": " << dynamicArr[i] << endl;
}
delete[] dynamicArr;
cout << endl;
}
