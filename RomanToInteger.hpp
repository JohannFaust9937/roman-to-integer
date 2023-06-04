#pragma once
#include <string>
#include <map>

struct Utility {
    inline static std::map<char, unsigned short> map
    {
        { 'I', 1 },
        { 'V', 5 },
        { 'X', 10 },
        { 'L', 50 },
        { 'C', 100 },
        { 'D', 500 },
        { 'M', 1000 }
    };

    static int convert(char input);
};

class Solution {
public:
    int romanToInt(std::string);
};