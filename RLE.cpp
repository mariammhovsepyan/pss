#include "RLE.h"
#include "string.h"


RLE::RLE()
{

}

int RLE::Encode(const char* pSrc, unsigned int SrcSize, char* pRez, unsigned int Rezsize)
{
	if (!pSrc || !SrcSize || !pRez || !Rezsize || Rezsize < SrcSize)
		return -1;

	return 0;
}

int RLE::Decode(const char* pSrc, unsigned int SrcSize, char* pRez, unsigned int Rezsize)
{
	if (!pSrc || !SrcSize || !pRez || !Rezsize || Rezsize < SrcSize)
		return -1;

	return 0;
}