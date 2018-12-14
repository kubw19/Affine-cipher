#pragma once
#include "Alfabet.h"
class AffineCipher
{

private:
	int A;
	int B;
	Alfabet* alfabet;
	int number(char z);
	char letter(int z);
	char encryptLetter(char letter);
	char decryptLetter(char letter);
	
public:
	AffineCipher(Alfabet* alfabet, int A, int B);
	~AffineCipher();
	void encrypt(std::string msg);
	void decrypt(std::string msg);
	int modInverse(int a, int m);
};

