#pragma once

#include "Crypto.h"


class RLE : public Crypto {
public:
	virtual	int Encode(const char* pSrc, unsigned int SrcSize, char* pRez, unsigned int Rezsize);
	virtual	int Decode(const char* pSrc, unsigned int SrcSize, char* pRez, unsigned int Rezsize);

public:
	RLE();

private:
};