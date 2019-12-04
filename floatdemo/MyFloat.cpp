#include "pch.h"
#include "MyFloat.h"
#include <iostream>
MyFloat::MyFloat()
{
}

MyFloat::MyFloat(bool sign, char ex, unsigned char* mantissa)
{
	this->bSign = sign;
	this->cExponent = ex;
	this->ulMantissa = mantissa;
}

std::string MyFloat::to_string()
{
	char result[32];
	int index = 0;
	if (this->bSign) {
		result[index++] = '0';
	}
	else {
		result[index++] = '1';
	}
	std::cout << this->cExponent << std::endl;
	char ex = this->cExponent + 127;
	int temp;
	for (int i = 0; i < 8; i++) {
		temp = (ex >> i) & 1;
		result[index++] = temp;
	}

	for (int i = 0; i < 23; i++) {
		result[index++] = this->ulMantissa[i];
	}
	for (int i = 0; i < 32; i++) {
		std::cout << result[i] << std::endl;
	}

	std::string s(&result[0], &result[31]);
	return s;
}


