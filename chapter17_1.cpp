#include "std_lib_facilities.h"

ostream& print_array(ostream& os, int*a, int n)
{
	for (int i = 0; i < n; ++i)
		os << a[i] << endl;
	return os;
}

ostream& print_vector(ostream& os, vector<int>& vec)
{
	for ( int vv : vec)
		os << vv << endl;
	return os;
}

int main()
try
{
	int* arr = new int[20];
	int x = 100;
	for (int i = 0; i < 20; ++i)
	{
		arr[i] = x;
		++x;
	}
	print_array(cout, arr, 20);
	delete[] arr;

	vector<int> v(20);
	int y = 100;
	for (int& k : v)
	{
		k = y;
		++y;
	}
	print_vector(cout, v);

		return 0;
} catch (exception& e){
	cerr << "Exception: " << e.what() << endl;
	return 1;
} catch (...){
	cerr << "Unknown error" << endl;
	return 2;
}