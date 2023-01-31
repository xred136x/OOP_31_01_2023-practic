#include "Book.h"
Book::Book(std::string nameBook, std::string nameAutor) : _nameBook(nameBook), _nameAutor(nameAutor) {}

void Book::setNameBook(std::string nameBook)
{
	_nameBook = nameBook;
}
