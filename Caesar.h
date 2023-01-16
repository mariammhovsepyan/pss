#pragma once

#include "Crypto.h"

const unsigned int Step = 3;

class Caesar : public Crypto {
public:
	virtual	int Encode(const char* pSrc, unsigned int SrcSize, char* pRez, unsigned int Rezsize);
	virtual	int Decode(const char* pSrc, unsigned int SrcSize, char* pRez, unsigned int Rezsize);

public:
	Caesar(unsigned int num = Step);
	void SetStep(unsigned int num = Step);
	unsigned int GetStep();
private:
	unsigned int step;
};
