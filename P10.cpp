#include <iostream>
int main() {
	int x = 10, y = 20, z = 30; 
	int *ptrArr[]= {&x, &y, &z}; // Array of pointers
	std::cout << "Values using array of pointers: "; 
	for (int i=0; i < 3; i++) { 
	std::cout << *ptrArr[i] << " ";
}
	std::cout << std::endl;
return 0;
}
