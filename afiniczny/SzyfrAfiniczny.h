#pragma once
#include "Alfabet.h"
class SzyfrAfiniczny
{

private:
	int A;
	int B;
	std::string* znakiWiadomosci;
	Alfabet* alfabet;
	int number(char z);
	char znak(int z);
	char szyfrujZnak(char znak);
	char deszyfrujZnak(char znak);
	
public:
	SzyfrAfiniczny(Alfabet* alfabet, int A, int B);
	~SzyfrAfiniczny();
	void szyfruj(std::string msg);
	void deszyfruj(std::string msg);
	int modInverse(int a, int m);
};

