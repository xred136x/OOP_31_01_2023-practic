#pragma once
#include"Abonent.h"
#include"Book.h"

class ILibrary
{
public:
	virtual void addAbonent(Abonent x) = 0;
	virtual void Registred(Book b) = 0;
	virtual void Pop() = 0;
};

