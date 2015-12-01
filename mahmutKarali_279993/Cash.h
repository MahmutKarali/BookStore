#pragma once

#include <iostream>	
#include <string>		

using namespace std;

class Cash
{
public:
	Cash();
	void cashAddMoney(int money);
	int const getPriceCash();
	
private:
	int priceCash;
};
