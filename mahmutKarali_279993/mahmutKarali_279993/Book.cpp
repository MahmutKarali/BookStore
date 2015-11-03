#include<iostream>
#include <string>
#include "Book.h"  

using namespace std;

Book::Book(){
	bookName = "";
	bookPrice = 0;
	bookStock = 0;
}

Book::Book(string authorName, string bookName, int bookPrice, int bookStock){

	this->bookName = bookName;
	author.setAuthorName(authorName);
	this->bookPrice = bookPrice;
	this->bookStock = bookStock;
}

void Book::showBookList(){

	cout << endl << "Author : " << author.authorName;
	cout << " Book : " << bookName;
	cout << " Price : " << bookPrice;
	cout << " Stock : " << bookStock << endl;

}

string const Book::getAuthorName(){
	return author.getAuthorName();
}

string const Book::getBookName(){
	return bookName;
}

int const Book::getBookPrice(){
	return bookPrice;
} 

void Book::reduceStock(){
	bookStock--;
}

int const Book::getStock(){
	return bookStock;
}
