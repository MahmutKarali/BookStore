
#include<iostream>
#include <string>
#include "Author.h" 

using namespace std;

Author::Author(){
}

void Author::setAuthorName(string authorName){
	this->authorName = authorName;
}

string Author::getAuthorName(){
	return authorName;
}