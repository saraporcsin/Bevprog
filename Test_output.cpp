#include "std_lib_facilities.h"

int main()
{	
	//elso resz
	int birth_year = 2001;
	cout << birth_year << " (decimal)\t" << hex << birth_year << " (hexadecimal)\t" << oct << birth_year << " (octal)" << dec << endl << endl;

	//masodik resz
	int age = 2020 - birth_year;
	cout << "Age: " << age << endl << endl;

	//harmadik resz
	cout << showbase << birth_year << " (decimal)\t" << hex << birth_year << " (hexadecimal)\t" << oct << birth_year << " (octal)\t" << dec << endl;
	cout << noshowbase << endl;

	//negyedik resz
	int a;
	int b;
	int c;
	int d;
	cin >> a >> oct >> b >> hex >> c >> d;
	cout << a << '\t' << b << '\t' << c << '\t' << d << endl << endl;
	cout << dec;

	//otodik resz
	cout << 1234567.89 << " (defaultfloat)\n" << fixed << 1234567.89 << " (fixed)\n" << scientific << 1234567.89 << " (scientific)\n" << endl;
	cout << defaultfloat << dec;

	//hatodik resz
	cout << '|' << " Vezetéknév" << setw(7) <<'|' << " Keresztnév" << setw(4) << '|' << " Telefon" << setw(8) << '|' << " Email" << setw(25) << '|' << endl;
	cout << '|' << " Porcsin" << setw(10) << '|' << " Sára" << setw(10) << '|' << " 06100" << setw(10) << '|' << " porcsin.sara@gmai.com" << setw(9) << '|' << endl;
	cout << '|' << " Nagy" << setw(13) << '|' << " István" << setw(8) << '|' << " 06200" << setw(10) << '|' << " nagy.istvan@gmai.com" << setw(10) << '|' << endl;
	cout << '|' << " Kiss" << setw(13) << '|' << " Béla" << setw(10) << '|' << " 06300" << setw(10) << '|' << " kiss.bela@gmai.com" << setw(12) << '|' << endl;
	cout << '|' << " Szabó" << setw(12) << '|' << " Rebeka" << setw(8) << '|' << " 06400" << setw(10) << '|' << " szabo.rebeka@gmai.com" << setw(9) << '|' << endl;
	cout << '|' << " Kovács" << setw(11) << '|' << " Réka" << setw(10) << '|' << " 06500" << setw(10) << '|' << " kovacs.reka@gmai.com" << setw(10) << '|' << endl;


	return 0;
}