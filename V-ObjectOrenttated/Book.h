#pragma once
#include <iostream>
#include <string>
#include "Book.h"


using namespace std;

class Book {
public:
	std::string Title;
	std::string Genre;
	bool isAvalible;

	//Book();
	//Book(std::string t, std::string g);




    Book() {
        Title = "";
        Genre = "";
        isAvalible = true;
    }

    Book(std::string t, std::string g) {
        Title = t;
        Genre = g;
        isAvalible = true;
    }
    
};

Book libary[3] = {
   Book("the hobbit", "fantasy"),
   Book("WW3", "reality"),
   Book("Cyberpunk", "scifi"),
};

extern Book library[3];

