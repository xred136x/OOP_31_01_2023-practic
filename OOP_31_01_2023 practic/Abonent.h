#pragma once
#include<string>
class Abonent
{
public:
	Abonent (std::string name, std::string booksWanted) : _name(name), _booksWanted(booksWanted){}
	std::string getName() {
		return _name;
	}
	std::string getBookWanted() {
		return _booksWanted;
	}
private:
	std::string _name = "No name";
	std::string _booksWanted;
	
};

