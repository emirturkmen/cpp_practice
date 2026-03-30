#include "trinary.h"

namespace trinary {

// TODO: add your solution here

    int to_decimal(std::string num){
        int result = 0;
        for(size_t i = 0;i<num.size();i++){
            if(isalpha(num[i])){
                return 0;
            }
            int digit = num[i] - '0';
            result += digit * std::pow(3, num.size()-i-1);
        }
        return result;
    }
}  // namespace trinary
