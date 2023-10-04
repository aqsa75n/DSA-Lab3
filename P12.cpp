#include <iostream> 
using namespace std;

int add(int a, int b) {
	return a + b;
}
int main() {
	int (*ptr)(int, int);
	ptr = add;
cout << "Result of add(5, 7) using pointer to function:"<< ptr (5, 7) << endl;
return 0;
}
