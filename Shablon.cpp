#include "Shablon.h"
#include "string.h"

void Shablon::setTable(const char* enc_str, const char* decode_str)
{
	strcpy_s(estr, enc_str);
	strcpy_s(destr, decode_str);
}
const char* Shablon::get_eTableptr()
{
	return estr;
}
const char* Shablon::get_deTableptr()
{
	return destr;
}
Shablon::Shablon()
{

}

int Shablon::Encode(const char* pSrc, unsigned int SrcSize, char* pRez, unsigned int Rezsize)
{
	if (!pSrc || !SrcSize || !pRez || !Rezsize || Rezsize < SrcSize)
		return -1;

	return 0;
}

int Shablon::Decode(const char* pSrc, unsigned int SrcSize, char* pRez, unsigned int Rezsize)
{
	if (!pSrc || !SrcSize || !pRez || !Rezsize || Rezsize < SrcSize)
		return -1;

	return 0;
}




