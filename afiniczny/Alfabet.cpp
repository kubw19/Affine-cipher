#include "stdafx.h"
#include "Alfabet.h"


Alfabet::Alfabet(int sizeN)
{
	this->sizeN = sizeN;
	this->znaki = new char[sizeN]();
}


Alfabet::~Alfabet()
{
}

void Alfabet::insertZnaki(char* Znaki) {
	this->znaki = Znaki;
}

void Alfabet::wypiszZnaki() {
	for (int i = 0; i < sizeN; i++) {
		std::cout << znaki[i];
	}
}

int Alfabet::size(){
	return this->sizeN;
}
