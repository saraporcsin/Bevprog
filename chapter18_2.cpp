#include "std_lib_facilities.h"

vector<int> gv = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f (vector<int> v)
{
	vector<int> lv(10);
	lv = v;
	for (int i = 0; i < lv.size(); ++i)
		cout << lv[i] << '\t';
	cout << endl;
	vector<int> lv2 = v;
	for (int i = 0; i < lv2.size(); ++i)
		cout << lv2[i] << '\t';
	cout << endl;
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
try{
	f(gv);

	vector<int> vv(10);
	for (int i = 0; i < vv.size(); ++i)
		vv[i] = fac(i+1);
	f(vv);
	return 0;
}catch (exception& e){
	cerr << "Exception: " << e.what() << endl;
	return 1;
} catch (...){
	cerr << "Unknown error" << endl;
	return 2;
}