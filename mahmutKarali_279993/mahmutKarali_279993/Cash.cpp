
#include<iostream>
#include <string>
#include "Cash.h" 

using namespace std;

Cash::Cash(){
	priceCash = 0;
}

void Cash::cashAddMoney(int money){
	priceCash += money;
}
int const Cash::getPriceCash(){

	return priceCash;
}