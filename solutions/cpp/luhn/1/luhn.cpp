#include "luhn.h"

namespace luhn {

// TODO: add your solution here
    bool valid(const std::string num){
        std::string card_no = "";
        int len = 0;
        for(char c:num){
            if(isspace(c)){
                continue;
            }
            else if(isdigit(c)){
                card_no += c;
                len++;
            }
            else{
                return false;
            }
        }
        if(len < 2){
            return false;
        }
        int total_sum = 0;
        for (size_t i = 1; i <= card_no.size(); i++) {
            int digit = card_no[card_no.size() - i] - '0';
            if (i % 2 == 0) {
                digit *= 2;
                if (digit > 9) digit -= 9;
            }
        total_sum += digit;
}

        return total_sum % 10 == 0;
    }
}  // namespace luhn
