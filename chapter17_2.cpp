#include "std_lib_facilities.h"

ostream& print_array(ostream& os, int*a, int n)
{
	for (int i = 0; i < n; ++i)
		os << a[i] << endl;
	return os;
}

int main()
try
{
	int* p1 = new int{7};
	cout << "Pointer " << p1 << " points to " << *p1 << endl;

	int* p2 = new int[7];
	int y = 1;
	for (int i = 0; i < 7; ++i)
	{
		p2[i] = y;
		y *= 2;
	}
	cout << "The address of p2 is " << p2 << endl;
	for (int j = 0; j < 7; ++j)
		cout << p2[j] << '\t'; 
	cout << endl;

	int* p3 = p2;
	p2 = p1;
	p2 = p3;
	cout << "Pointer " << p1 << " points to " << *p1 << endl;
	cout << "Pointer " << p2 << " points to " << *p2 << endl;
	delete[] p2;

	p1 = new int[10] {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	

	p2 = new int[10];
	for (int m = 0; m < 10; ++m)
		p2[m] = p1[m];
	/*for (int h = 0; h < 10; ++h)
		cout << p2[h] << '\t';
	cout << endl;*/

	//same thing but with vectors
	vector<int> v1 {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	vector<int> v2 (10);
	v2 = v1;
	for (int v : v2)
		cout << v << '\t';
	cout << endl;

	return 0;
}catch (exception& e){
	cerr << "Exception: " << e.what() << endl;
	return 1;
} catch (...){
	cerr << "Unknown error" << endl;
	return 2;
}