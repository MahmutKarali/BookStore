#include <string>						
#include <iostream>		
#include "Book.h"
#include "Author.h" 
#include "Cash.h"

using namespace std;

int main()
{
	//MAHMUT KARALÝ - 279993
	Book b1("Ataturk", "Nutuk", 25, 3);
	Book b2("NecipFazil", "Cile", 15, 10);
	Book b3("MehmetAkif", "Safahat", 15, 10);
	Book b4("NazanBekiroglu", "La", 18, 10);
	Book b5("SinanYagmur", "Hamus", 10, 10);
	Book b6("ElifSafak", "Ask", 30, 10);
	Book b7("Ekinci", "YapayZeka", 40, 10);
	Book b8("MehmetAkif", "Safahat", 50, 10);
	Book b9("TarikBugra", "Osmancik", 45, 10);
	Book b10("Nabiyev", "Algoritmalar", 35, 10);

	Book bookList[10] = { b1, b2, b3, b4, b5, b6, b7, b8, b9, b10 };

	Cash cash;
	
	//Show library
	for (int i = 0; i < 10; i++)
	{
		bookList[i].showBookList();
	}

	cout << "-------------------------------------------------------------"<<endl << endl;
	string authorOrBookName;
	string buyCase;

	while (true){
		cout << "Entry author/book name: ";

		cin >> authorOrBookName;
		for (int i = 0; i < 10; i++)
		{
			if (authorOrBookName == bookList[i].getAuthorName() || authorOrBookName == bookList[i].getBookName()){
				cout << endl << "Author : " << bookList[i].getAuthorName();
				cout << " Book : " << bookList[i].getBookName();
				cout << " Price : " << bookList[i].getBookPrice();
				cout << " Stock : " << bookList[i].getStock() << endl;

				cout << endl << "Do you want to buy ? (yes-no) : ";
				cin >> buyCase;

				if (buyCase == "yes"){
					if (bookList[i].getStock() == 0){
						cout << " Stock Case : 0";
						cout << " Cash :" << cash.getPriceCash() << endl;
					}
					else {
						bookList[i].reduceStock();
						cash.cashAddMoney(bookList[i].getBookPrice());
						cout << endl;
						cout << " Author :" << bookList[i].getAuthorName();
						cout << " Book :" << bookList[i].getBookName();
						cout << " Price :" << bookList[i].getBookPrice();
						cout << " Stock :" << bookList[i].getStock();
						cout << " Cash :" << cash.getPriceCash() << endl;
						cout << endl;
					}
				}
			}
		}

	}

	return 0;
}