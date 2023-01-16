#pragma once

#include "Crypto.h"


class Shablon : public Crypto {
public:
	virtual	int Encode(const char* pSrc, unsigned int SrcSize, char* pRez, unsigned int Rezsize);
	virtual	int Decode(const char* pSrc, unsigned int SrcSize, char* pRez, unsigned int Rezsize);

public:
	Shablon();
	const char* get_eTableptr();
	const char* get_deTableptr();
	void setTable(const char* enc_str, const char* decode_str);

private:
	char estr[255];
	char destr[255];
};