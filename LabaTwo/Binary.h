#pragma once
#include "Integer.h"
#include <bitset>
using std::bitset;
class Binary : public Integer
{public:
	void summation() override;
	void subtracting() override;
	void multiplication()override;
	void dividing()override;
	void toDecimal(bitset<32>num);
	void toDecimal();
};

