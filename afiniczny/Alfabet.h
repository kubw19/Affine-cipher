#pragma once
#include <string>
#include <iostream>
class Alfabet
{
private:
	int sizeN;
public:
	char* znaki;
	Alfabet(int sizeN);
	~Alfabet();

	void insertZnaki(char* znaki);
	void wypiszZnaki();

	int size();
};

