#include "Caesar.h"

Caesar::Caesar(unsigned int num)
{
	step = num;
}

void Caesar::SetStep(unsigned int num)
{
	step = num;
}

unsigned int Caesar::GetStep()
{
	return step;
}

int Caesar::Encode(const char* pSrc, unsigned int SrcSize, char* pRez, unsigned int Rezsize)
{
	if (!pSrc || !SrcSize || !pRez || !Rezsize || Rezsize < SrcSize)
		return 0;

	for (unsigned int i = 0; i < SrcSize; ++i)
		pRez[i] = pSrc[i] + step;

	return SrcSize;
}

int Caesar::Decode(const char* pSrc, unsigned int SrcSize, char* pRez, unsigned int Rezsize)
{
	if (!pSrc || !SrcSize || !pRez || !Rezsize || Rezsize < SrcSize)
		return 0;

	for (unsigned int i = 0; i < SrcSize; ++i)
		pRez[i] = pSrc[i] - step;

	return SrcSize;
}
