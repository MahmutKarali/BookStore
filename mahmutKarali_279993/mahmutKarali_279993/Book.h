#pragma once 

#include <iostream>	 
#include <string>		
#include"Author.h"

using namespace std;

class Book
{
public:
	Book();
	Book(string bookName, string authorName, int bookPrice, int bookStock);

	void showBookList();
	string const getAuthorName();
	string const getBookName();
	int const getBookPrice(); 
	void reduceStock();
	int const getStock();

private:
	Author author;
	string bookName;
	int bookPrice;
	int bookStock;
};
