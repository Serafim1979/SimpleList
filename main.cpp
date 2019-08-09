#include<iostream>
#include<string>
#include"testlist.h"

int main()
{
	using std::cout;
	using std::cin;
	using std::string;

	List some;

	string phrase[] =
	{
		"Black Sabbath",
		"Led Zeppelin",
		"Deep Purple",
		"Uriah Heep",
		"Pink Floyd",
		"Iron Maiden",
		"Judas Priest"
	};

	if (some.isempty())
		for (int i = 0; !some.isfull(); ++i)
			some.add(phrase[i]);

	some.show_list();
	some.reset_list();

	string str;

	while (!some.isfull())
	{
		cout << "Enter your string and it will be added to list: ";
		getline(cin, str);
		some.add(str);
	}

	some.show_list();

	system("pause");
	return 0;
}