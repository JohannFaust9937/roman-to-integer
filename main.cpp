#include <iostream>
#include "RomanToInteger.hpp"

int main(int, char*[])
{
    std::cout << "https://leetcode.com/problems/roman-to-integer/ :\n";
    Solution example;
    std::cout << "III -> " << example.romanToInt("III") << '\n';
    std::cout << "LVIII -> " << example.romanToInt("LVIII") << '\n';
    std::cout << "MCMXCIV -> " << example.romanToInt("MCMXCIV") << '\n';
    return 0;
}
