#include <iostream>
using namespace std;
	int main(){
	
	int arr[] = {10, 20, 30}; 
	int *ptrArr[3];
		for (int i = 0; i < 3; i++) { 
			ptrArr[i] = &arr[i];
				cout << "Value at ptrArr[" << i << "]: " << *ptrArr[i] << endl; 
				}
return 0;
}
