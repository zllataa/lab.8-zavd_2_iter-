﻿//Дано літерний рядок, який містить послідовність символів s0, ..., sn, ... .
//2. Замінити кожну пару сусідніх букв “SQ” або ”QS” трійкою зірочок “ * **”.


#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>

using namespace std;


char* Change(char* str)
{
	size_t len = strlen(str);
	if (len < 2)
		return str;
	char* tmp = new char[len * 3 / 2 + 1];
	char* t = tmp;
	tmp[0] = '\0';
	size_t i = 0;



	while (i < len && str[i + 1] != 0)
	{
		if ((str[i] == 'S' && str[i + 1] == 'Q') || (str[i] == 'Q' && str[i + 1] == 'S'))
		{
			strcat(t, "***");
			t += 3;
			i += 2;
		}
		else
		{
			*t++ = str[i++];
			*t = '\0';
		}
	}
	*t++ = str[i++];
	*t++ = str[i++];
	*t = '\0';
	strcpy(str, tmp);
	return tmp;
}

int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	char* dest = new char[151];
	dest = Change(str);
	cout << "Modified string (result): " << dest << endl;
	return 0;
}
