#include "armstrong_numbers.h"

namespace armstrong_numbers {

// TODO: add your solution here
    bool is_armstrong_number(int num){
        int copy = num;
        int num_digit = 0;
        while(num > 0){
            num /= 10;
            num_digit ++;
        }
        num = copy;
        int res = 0;
        while(num > 0){
            res += std::pow(num % 10, num_digit);
            num /= 10;
        }
        return res == copy;
    }
}  // namespace armstrong_numbers
