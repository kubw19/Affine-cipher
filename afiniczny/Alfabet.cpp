#include "stdafx.h"
#include "Alfabet.h"


Alfabet::Alfabet(int sizeN)
{
	this->sizeN = sizeN;
	this->letters = new char[sizeN]();
}


Alfabet::~Alfabet()
{
}

void Alfabet::insertLetters(char* letters) {
	this->letters = letters;
}

void Alfabet::echoLetters() {
	for (int i = 0; i < sizeN; i++) {
		std::cout << letters[i];
	}
}

int Alfabet::size(){
	return this->sizeN;
}
