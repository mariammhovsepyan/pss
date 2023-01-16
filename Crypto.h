#pragma once

// Base Abstract Class of Crypto classes collection
class Crypto {
public:
	virtual	int Encode(const char* pSrc, unsigned int SrcSize, char* pRez, unsigned int Rezsize) = 0;
	virtual	int Decode(const char* pSrc, unsigned int SrcSize, char* pRez, unsigned int Rezsize) = 0;

};