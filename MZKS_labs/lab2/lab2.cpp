﻿/*
	Разработать программу, выполняющую шифрование и
расшифровывание произвольного двоичного файла с использованием
перестановочного шифра используя в качестве ключа последовательность,
соответствующую номеру варианта. Выполнить проверку путем двоичного
сравнения исходного файла и фала, полученного после расшифровывания.
	Размер блока: 4 байта

	Вариант 4. Ключ - 12 13 30 5 27 6 11 25 3 21 22 2 23 0 8 4 18 19 10 1 14 29 9 28 20 17 26 31 7 16 15 24
*/

#include <cstdio>

int cryptBlock(unsigned int block)
{

	return 0;
}

int main()
{
	FILE* pFile;
	fopen_s(&pFile, "file.bin", "rb");
	char buffer[256];
	fread(buffer, 1, 5, pFile);
}