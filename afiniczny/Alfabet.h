#pragma once
#include <string>
#include <iostream>
class Alfabet
{
private:
	int sizeN;
public:
	char* letters;
	Alfabet(int sizeN);
	~Alfabet();

	void insertLetters(char* letters);
	void echoLetters();

	int size();
};

