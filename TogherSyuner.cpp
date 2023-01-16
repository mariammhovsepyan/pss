#include "TogherSyuner.h"
#include "string.h"


TogherSyuner::TogherSyuner(string s, int i)
{
	str = s;
	n = i;
}

int TogherSyuner::Encode(const char* pSrc, unsigned int SrcSize, char* pRez, unsigned int Rezsize)
{
	if (!pSrc || !SrcSize || !pRez || !Rezsize || Rezsize < SrcSize)
		return -1;

	return 0;
}

int TogherSyuner::Decode(const char* pSrc, unsigned int SrcSize, char* pRez, unsigned int Rezsize)
{
	if (!pSrc || !SrcSize || !pRez || !Rezsize || Rezsize < SrcSize)
		return -1;

	return 0;
}
string TogherSyuner::encode()
{
    int i, j, k = 0;
    char a[3][3] = { {'0','0','0'}, {'0','0','0'}, {'0','0','0'} };
    string result = "";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            a[i][j] = str[k];
            k++;
        }
    }
    for (j = 0; j < n; j++) {
        for (i = 0; i < n; i++) {
            result = result + a[i][j];
        }
    }
    return result;
}


