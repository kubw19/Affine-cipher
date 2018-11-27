#include "stdafx.h"
#include "SzyfrAfiniczny.h"


SzyfrAfiniczny::SzyfrAfiniczny(Alfabet* alfabet, int A, int B)
{
	this->alfabet = alfabet;
	this->A = A;
	this->B = B;
}


SzyfrAfiniczny::~SzyfrAfiniczny()
{
}

void SzyfrAfiniczny::szyfruj(std::string msg) {
	int rozmiar = msg.length();
	for (int i = 0; i < rozmiar; i++) {
		std::cout << szyfrujZnak(msg[i]);
	}
}

void SzyfrAfiniczny::deszyfruj(std::string msg) {
	int rozmiar = msg.length();
	for (int i = 0; i < rozmiar; i++) {
		std::cout << deszyfrujZnak(msg[i]);
	}
}

int SzyfrAfiniczny::number(char z) {
	for (int i = 0; i < alfabet->size(); i++) {
		if (alfabet->znaki[i] == z)return i + 1;
	}
}

char SzyfrAfiniczny::znak(int z) {
	return alfabet->znaki[z - 1];
}

char SzyfrAfiniczny::szyfrujZnak(char znak) {
	int e = (A * number(znak) + B) % alfabet->size();
	return this->znak(e);
}

char SzyfrAfiniczny::deszyfrujZnak(char znak) {
	int d = (modInverse(A, alfabet->size()) *( number(znak) - B)) % alfabet->size();
	return this->znak(d);
}

int SzyfrAfiniczny::modInverse(int a, int m)
{
	a = a % m;
	for (int x = 1; x<m; x++)
		if ((a*x) % m == 1)
			return x;
}