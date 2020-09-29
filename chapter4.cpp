#include "std_lib_facilities.h"

int main()
{
	cout<< "Please enter an integer value followed by a unit (cm, m, in, ft)\n";
	
	double number;
	
	double largest = numeric_limits<double>::lowest();
	double smallest = numeric_limits<double>::max();
	
	string unit;
	
	double sum = 0;

	int number_of_values = 0;

	vector<double> v;
	
	constexpr double cm_per_m = 100;
	constexpr double cm_per_in = 2.54;
	constexpr double in_per_ft = 12;	
	
	while (cin>> number >> unit)
	{
		if (unit.empty())
			simple_error("No unit");
		
		if (unit != "cm" & unit!= "m" & unit!= "ft" & unit!= "in")
			simple_error("Invalid unit");
		
		cout<< "The value entered: " << number << unit <<'\n';

		if (unit == "cm")
			{number = number / cm_per_m;
			cout<< "The number in meters is: " << number << '\n';}
					
		else if (unit == "in")
			{number = number * cm_per_in / cm_per_m;
			cout<< "The number in meters is: " << number << '\n';}
					
		else if (unit == "ft")
			{number = number * in_per_ft * cm_per_in / cm_per_m;
			cout<< "The number in meters is: " << number << '\n';}

		if (number>largest)
			largest = number;
			cout<< largest <<" the largest so far\n";

		if (number<smallest)
			smallest = number;
			cout<<smallest <<" the smallest so far\n";

		sum = sum + number;
			cout<< "The sum of the values in meters is: " << sum << '\n';

		++number_of_values;
		cout<< "The number of values is: " << number_of_values << '\n';

		v.push_back(number);
		
		{sort(v);
		for(int i = 0; i<v.size(); ++i)
			cout<<"v[" << i << "] == " <<v[i]<< "\n \n";}
	}
	
	
	return 0;
}