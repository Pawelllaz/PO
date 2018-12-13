#include "pch.h"
#include <iostream>
#include <string.h>
#include <fstream>
#include <sstream>
using namespace std;

void to_high_and_low(string&);

int main()
{
	cout << "Wpisz tekst ktory chcesz przekonwertowac (bez polskich znakow):" << endl;
	
	string text, choose;
	getline(cin, text);
	to_high_and_low(text);
	cout << "Po konwersji: " << text << endl << endl << "\tpress any key...";
	fstream file;
	file.open("zamiana.txt", ios::out | ios::trunc);
	if (file.is_open())
	{
		file << text;
		file.close();
	}
	getchar();
	return 0;
}

void to_high_and_low(string &s)
{
	for (int i = 0; i<s.size(); i+=2)
		if (s[i] >= 'A' and s[i] <= 'Z') s[i] += 'a' - 'A';
	for (int i = 1; i<s.size(); i+=2)
		if (s[i] >= 'a' and s[i] <= 'z') s[i] -= 'a' - 'A';
}