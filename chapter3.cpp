#include "std_lib_facilities.h"

int main ()

{
	//bekéri a nevet
	cout<< "Enter the name of the person you want to write to\n";
		string name;
		cin>> name;
	
	//bekéri egy barát nevét
	cout<< "Please enter the name of a mutual friend\n";
		string friend_name;
		cin>> friend_name;
	
	//bekéri a barát nemét és megadja melyik névmást használja illetve kilép ha hibásan adjuk meg
	cout<< "Please enter the gender of the mutual friend (m or f)\n";
		char friend_sex = 0;
		cin>> friend_sex;
		string pronoun;
			if(friend_sex == 'm')
				pronoun = "him";
			else if(friend_sex == 'f')
				pronoun = "her";
			else
				simple_error("Invalid input");

	//bekéri a kort és if statementekkel plusz mondatokat ad a levélhez ahol szükséges illetve kilép ha hibásan adjuk meg
	cout<< "Please enter the age of the recipient of this letter\n";
		int age;
		cin>> age;
			if(age<=0 || age>=110)
				simple_error("you're kidding!");
		string sentence;
			if (age < 12)
				sentence = "Next year you will be " + to_string(age+1) + ".";
			else if (age == 17)
				sentence = "Next year you will be able to vote.";
			else if (age > 70)
				sentence = "I hope you are enjoying retirement.";
			else
				sentence = "";

	//bekéri a saját nevet
	cout<< "Please enter your own name\n";
		string own_name;
		cin>> own_name;
	
	//final output
	cout<< "Dear "<<name<<",\n 	How are you? I am fine. I miss you. How is school? Are you enjoying university?\n Have you seen "<<friend_name<<" lately? If you have seen "<<pronoun<<" tell "<<pronoun<<" to call me. I hear you just had a birthday and you are "<<age<<" years old. "<<sentence<<" \n 	Yours sincerely, \n \n 	"<<own_name<<"\n";

	return 0;
}