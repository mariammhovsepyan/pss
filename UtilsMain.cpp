#include "Caesar.h"
#include <string>
#include <vector>
#include "iostream"
using namespace std;

#include <string.h>
#include "Shablon.h"
#include "RLE.h"
#include "TogherSyuner.h"
//#include "UtilsMain.h"

vector<string> MenuItems = {
	"  Caesar." ,
	"  Shablon." ,
	"  RLE.",
	"  TogherSyuner.",
	"  Unexistant Method."
};

int Display(vector<string>& Items)
{
	size_t i = Items.size();
	cout << "\nSupported Methods...\n";
	for (i = 0; i < Items.size(); ++i)
	{
		cout << "\n" << (i + 1) << "." << Items[i];
	}
	cout << "\nEnter Method number (1 to N, 0 for exit...)\n";
	cin >> i;
	return i;
};



int main(int argc, char* argv[])
{
	unsigned int ItemNum = Display(MenuItems);
	if (0 == ItemNum)
		exit(0);
	ItemNum--;
	if (ItemNum >= MenuItems.size())
	{
		cout << '\n' << ItemNum << "  Doesn't exist. Terminate...\n";
		exit(0);
	}

	cout << "Selected method is  " << MenuItems[ItemNum];

	if (ItemNum == 0)
	{

		Caesar cs;
		string str;
		cout << "\nEnter text to Encrypt...\n";
		//cin >> str;
		//cin.clear();
		//fflush(stdin);

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		getline(cin, str);

		cout << "The initial string is : ";
		cout << str << endl;

		size_t sz = str.size() + 10;
		size_t szn = sz;
		char* pDecodeStr = new char[sz];
		char* pOrig = new char[sz];
		char* pFinal = new char[sz];
		strcpy_s(pOrig, sz, str.c_str());

		int decodeSize = cs.Encode(pOrig, str.size(), pDecodeStr, szn);
		pDecodeStr[decodeSize] = 0;

		cout << "\nEncoded str...\n" << pDecodeStr << '\n';

		int FinalSize = cs.Decode(pDecodeStr, decodeSize, pFinal, sz);
		pFinal[FinalSize] = 0;
		cout << "\nDecoded str...\n" << pFinal << '\n';

		if (strcmp(pOrig, pFinal))
		{
			cout << "\n:(  Doesn't Match...\n";
		}
		else
		{
			cout << "\n:)  Match. Good Work !!!\n";
		}
	}
	else if (ItemNum == 1)
	{
		Shablon sb;
		string str;
		const char* e_str = "holwaserfgh";
		const char* de_str = "asrtyhopkz";
		sb.setTable(e_str, de_str);
		cout << "\nEnter text to Encrypt...\n";
		//cin >> str;
		//cin.clear();
		//fflush(stdin);

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		getline(cin, str);

		cout << "The initial string is : ";
		cout << str << endl;
		const char* enc_str = sb.get_eTableptr();
		const char* dec_str = sb.get_deTableptr();
		string estr = enc_str;
		for (int i = 0; i < str.length(); i++)
		{
			bool f = false;
			for (int j = 0; j < estr.length(); j++)
			{
				if (str[i] == enc_str[j])
				{
					cout << dec_str[j];
					f = true;
				}
			}
			if (f == false) cout << str[i];
		}

	}
	else if (ItemNum == 2)
	{
		RLE rle;
		string str;
		cout << "\nEnter text to Encrypt...\n";
		//cin >> str;
		//cin.clear();
		//fflush(stdin);

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		getline(cin, str);

		cout << "The initial string is : ";
		cout << str << endl;
		int  i = 0, count;
		while (i < str.length())
		{
			count = 0;
			cout << str[i];
			while (str[i] == str[i + count])
			{
				count++;
			}
			i += count;
			cout << count;
		}
		cout << endl;
	}
	else if (ItemNum == 3)
	{
		string str;
		cout << "\nEnter text to Encrypt...\n";
		//cin >> str;
		//cin.clear();
		//fflush(stdin);

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		getline(cin, str);
		int n = 3;
		TogherSyuner ob(str, n);

		cout << "The initial string is : ";
		cout << str << endl;

		cout << ob.encode() << endl;

	}
}
