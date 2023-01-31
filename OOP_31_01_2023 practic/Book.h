#pragma once
#include<string>
#include<vector>
class Book
{
public:
	Book(std::string nameBook, std::string nameAutor);
	void setNameBook(std::string nameBook); 
	
	void setNameAutor(std::string nameAutor) {
		_nameBook = nameAutor;
	}
	std::string getNameBook() {
		return _nameBook;
	}
	std::string getNameAutor() {
		return _nameAutor;
	}

private:
	std::string _nameBook;
	std::string _nameAutor;
};

