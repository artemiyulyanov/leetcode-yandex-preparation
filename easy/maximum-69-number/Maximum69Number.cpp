//
// Created by Артемий on 26/07/2026.
//

#include "Maximum69Number.h"

int Maximum69Number::maximum69Number(int num) {
    std::string num_as_string = std::to_string(num);

    if (std::ranges::count(num_as_string, '6') == 0) return num;

    num_as_string[num_as_string.find('6')] = '9';

    return std::stoi(num_as_string);
}
