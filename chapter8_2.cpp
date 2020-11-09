#include "std_lib_facilities.h"

void swap_v(int, int);
void swap_r(int&, int&);
void swap_cr(const int&, const int&);

void swap_v(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap_r(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap_cr(const int& a, const int& b)
{
	int temp;
	temp = a;
	//a = b; 			assignment to const
	//b = temp;
}


/*int main()		//swap_v
{
	int x = 7;
	int y = 9;
	swap_v(x,y);
	cout << x << y << endl;		
	
	swap_v(7,9);
	cout<< x << y << endl;
	
	const int cx = 7;
	const int cy = 9;
	swap_v(cx,cy);
	cout<< cx << cy << endl;

	swap_v(7.7,9.9);
	cout<< x << y << endl;
	
	double dx = 7.7;
	double dy = 9.9;
	swap_v(dx,dy);
	cout<< dx << dy << endl;
	
	swap_v(7.7,9.9);
	cout<< x << y << endl;

	return 0;
}
*/


/*int main()		//swap_r
{
	int x = 7;
	int y = 9;
	swap_r(x,y);
	cout<< x << y << endl;

	//swap_r(7,9);
	//cout<< x << y << endl;			nem fordul le						

	const int cx = 7;
	const int cy = 9;
	//swap_r(cx,cy);
	//cout<< cx << cy << endl;

	//swap_r(7.7,9.9);
	//cout<< x << y << endl;			nem fordul le

	double dx = 7.7;
	double dy = 9.9;
	//swap_r(dx,dy);
	//cout<< dx << dy << endl; 			nem fordul le

	//swap_r(7.7,9.9);
	//cout<< x << y << endl;			nem fordul le

	return 0;
}
*/

int main ()		//swap_cr
{
	int x = 7;
	int y = 9;
	swap_cr(x,y);
	cout<< x << y << endl;

	swap_cr(7,9);
	cout<< x << y << endl;

	const int cx = 7;
	const int cy = 9;
	swap_cr(cx,cy);
	cout<< x << y << endl;

	swap_cr(7.7,9.9);
	cout<< x << y << endl;

	double dx = 7.7;
	double dy = 9.9;
	swap_cr(dx,dy);
	cout << dx << dy << endl;

	swap_cr(7.7,9.9);
	cout << x << y << endl;

	return 0;

}



