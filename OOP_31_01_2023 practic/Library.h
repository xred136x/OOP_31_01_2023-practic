#pragma once
#include"ILibrary.h"
#include"Abonent.h"
#include"Book.h"
#include<queue>

class Library : public ILibrary
{
public:
	void addAbonent(Abonent x) override {
		_abs.push(x);
	}
	void Registred(Book b) override {
		_books.push_back(b);
	}
	void Pop() override {	
		for (size_t i = 0; i < _books.size(); i++) {
			if (_books[i].getNameBook() == _abs.front().getBookWanted()) {
				_books.erase(_books.begin() + i);
				_abs.pop();
				return;
			}
			else {

			}
		}
	}
private:
	std::vector<Book> _books;
	std::queue<Abonent> _abs;

};

