#pragma once
#include <string>

class MyFloat{
private:
	bool bSign; // ����λ 1λ

	char cExponent;	// ָ��Ϊ ��-126��127 8λ

	unsigned char * ulMantissa; // β�� 23λ

public:
	MyFloat();
	MyFloat(bool sign, char ex, unsigned char* mantissa);
    std::string to_string();
};