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
