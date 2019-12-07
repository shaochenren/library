#include "book.hpp"
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// You are not obligated to use these function declarations - they're just given as examples
void readBooks(std::vector<Book *> & myBooks) {
    return;
}

int readPersons(std::vector<Person *> & myCardholders) {
    return 0;
}

void readRentals(std::vector<Book *> & myBooks, std::vector<Person *> myCardholders) {
    return;
}



Book * findBook(std::vector<Book *> & myBooks, int id) {
  string id1;
  ifstream fin;
	fin.open("books.txt");
	if(fin.fail())
	{
		cout << "Input file opening failed.\n";
		exit(1);
	}
	string search;
	cout << "Please enter the book ID: ";
	cin  >> search;
	bool isFound = 0;
	while(!fin.eof())
	{
		string temp = "";
		getline(fin,temp);
		for(int i = 0; i < search.size(); i++)
		{
			if(temp[i] == search[i])
				isFound = 1;
			else
			{
				isFound = 0;
				break;
			}
		}

		if(isFound)
		{
			cout << "Title: " << id1 ;
      getline(fin,id1);
      cout << id1 << endl;
      cout << "Rental Completed";
			//for(int i = search.size() + 1; i < temp.size(); i++)
			//	cout << temp[i];

			break;
		}

	}

	if(fin.eof()&&(!isFound))
	{
		cout << "Book ID not found";
	}

	fin.close();
  return nullptr;
}




Person * findPerson(std::vector<Person *> & myCardholders, int id, std::vector<Book *> & myBooks, int id2) {
  string id1;
  ifstream fin;
	fin.open("persons.txt");
	if(fin.fail())
	{
		cout << "Input file opening failed.\n";
		exit(1);
	}
	string search;
	cout << "Please enter the card ID: ";
	cin  >> search;
	bool isFound = 0;
	while(!fin.eof())
	{
		string temp = "";
		getline(fin,temp);
		for(int i = 0; i < search.size(); i++)
		{
			if(temp[i] == search[i])
				isFound = 1;
			else
			{
				isFound = 0;
				break;
			}
		}

		if(isFound)
		{
			cout << "Cardholder: " << id1 ;
			for(int i = search.size() + 3; i < temp.size(); i++) {
				cout << temp[i];
      }
      findBook(myBooks, id2);

			break;
		}

	}

	if(fin.eof()&&(!isFound))
	{
		cout << "Card ID not found";
	}

	fin.close();

  return nullptr;
}
