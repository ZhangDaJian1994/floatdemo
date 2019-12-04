#pragma once
#include <string>

class MyFloat{
private:
	bool bSign; // 符号位 1位

	char cExponent;	// 指数为 从-126到127 8位

	unsigned char * ulMantissa; // 尾数 23位

public:
	MyFloat();
	MyFloat(bool sign, char ex, unsigned char* mantissa);
    std::string to_string();
};