#include "stdafx.h"
#include "AffineCipher.h"


AffineCipher::AffineCipher(Alfabet* alfabet, int A, int B)
{
	this->alfabet = alfabet;
	this->A = A;
	this->B = B;
}


AffineCipher::~AffineCipher()
{
}

void AffineCipher::encrypt(std::string msg) {
	int rozmiar = msg.length();
	for (int i = 0; i < rozmiar; i++) {
		std::cout << encryptLetter(msg[i]);
	}
}

void AffineCipher::decrypt(std::string msg) {
	int rozmiar = msg.length();
	for (int i = 0; i < rozmiar; i++) {
		std::cout << decryptLetter(msg[i]);
	}
}

int AffineCipher::number(char z) {
	for (int i = 0; i < alfabet->size(); i++) {
		if (alfabet->letters[i] == z)return i + 1;
	}
}

char AffineCipher::letter(int z) {
	return alfabet->letters[z - 1];
}

char AffineCipher::encryptLetter(char letter) {
	int e = (A * number(letter) + B) % alfabet->size();
	return this->letter(e);
}

char AffineCipher::decryptLetter(char letter) {
	int d = (modInverse(A, alfabet->size()) *( number(letter) - B)) % alfabet->size();
	return this->letter(d);
}

int AffineCipher::modInverse(int a, int m)
{
	a = a % m;
	for (int x = 1; x<m; x++)
		if ((a*x) % m == 1)
			return x;
}