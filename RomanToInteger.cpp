#include "RomanToInteger.hpp"

int Utility::convert(char input)
{
    return map.find(input)->second;
};

int Solution::romanToInt(std::string input)
{
	unsigned short sum{ 0 };
	size_t size{ 0 };
	while (size != input.size() - 1)
	{
		if (Utility::convert(input[size]) >= Utility::convert(input[size + 1]))
		{
			sum += Utility::convert(input[size]);
		}
		else
		{
			sum -= Utility::convert(input[size]);
		}
		++size;
	}
	sum += Utility::convert(input[size]);
	return sum;
}