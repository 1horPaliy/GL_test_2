#include "stdafx.h"
#include <iostream>

int main(int argc, char *argv[])
{
	int N = atoi(argv[1]);	//Количество пролетов
	int D = atoi(argv[2]);	//Длинна пролета моста
	int cables = 0;

	for (int i = 0; i<=N; i++)		//Для каждого пролета моста
	{
		for (int j = 0; j < i; j++) //Считается длинна от начала
			cables += D;
	}
	std::cout  << cables;
	return 0;
}

