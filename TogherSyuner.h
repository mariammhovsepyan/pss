#pragma once

#include "Crypto.h"
#include <string>
using namespace std;


class TogherSyuner : public Crypto {
public:
	virtual	int Encode(const char* pSrc, unsigned int SrcSize, char* pRez, unsigned int Rezsize);
	virtual	int Decode(const char* pSrc, unsigned int SrcSize, char* pRez, unsigned int Rezsize);
	string encode();

public:
	TogherSyuner(string, int);

private:
	string str;
	int n;
};