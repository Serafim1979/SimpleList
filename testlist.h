#ifndef TESTLIST_H
#define TESTLIST_H

#include<string>

typedef std::string Item;

class List
{
private:
	enum{MAX = 4};
	Item items[MAX];
	int top;
public:
	List();
	bool isempty()const;
	bool isfull()const;
	void add(const Item& item);
	void visit(void(*pf)(Item&));
	void show_list();
	void reset_list();
};

#endif // !TESTLIST_H
#pragma once
