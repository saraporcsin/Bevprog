#include "std_lib_facilities.h"

int ga[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f (int arr[], int n)
{
	int la[10] = {};
	for (int i = 0; i < n; ++i)
		la[i] = arr[i];
	cout << "Elements of the local array (la): " << endl;
	for (const auto& a : la)
		cout << a << '\t';
	cout << endl;

	int* p = new int[n];
	for (int i = 0; i < n; ++i)
		p[i] = arr[i];
	cout << "Elements of the free store array: " << endl;
	for (int i = 0; i < n; ++i)
		cout << p[i] << '\t';
	cout << endl;

	delete[] p;
}

int fac (int n)
{
	int r = 1;
	while (n > 1)
	{
		r*=n;
		--n;
	}
		return r;
}

int main()
try
{
	f(ga, 10);
	int aa[10] = {};
		for (int i = 0; i < 10; ++i)
			aa[i] = fac(i+1);
	cout << "Factorial array: " << endl;
	f(aa, 10);
	return 0;
}catch (exception& e){
	cerr << "Exception: " << e.what() << endl;
	return 1;
} catch (...){
	cerr << "Unknown error" << endl;
	return 2;
}