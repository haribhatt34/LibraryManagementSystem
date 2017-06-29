/*
	Title: Library Management System 
	Author: Hari Shankar Bhatt
	Date: 30 June, 2017
*/

#include <iostream>
#define endl '\n'

class Library
{

private:
	int id;
	std::string name;
	double price;

public:
	void setID( int num)
	{
		id = num;
	}
	void setName( std::string name)
	{
		this->name = name;
	}
	void setPrice( double cost)
	{
		price = cost;
	}
	int getID()
	{
		return id;
	}
	std::string getName()
	{
		return name;
	}
	double getPrice()
	{
		return price;
	}
};

int main()
{
	std::cout << "Welcome to Library Management System !!!! \n\n";
	Library lib;

	//Setter
	lib.setID(0);
	lib.setName("The Art of thinking of Clearly"); 
	lib.setPrice(150);

	//Getter
	std::cout << "Book ID : " << lib.getID() << endl;
	std::cout << "Book Name : " << lib.getName() << endl;
	std::cout << "Book Price : " << lib.getPrice() << endl;
	return 0;
}