#pragma once

#include <iostream>	
#include <string>		

using namespace std;

class Author
{
public:
	Author();
	string getAuthorName();
	void setAuthorName(string authorName);
public:
	string authorName;
};
