#include "hexadecimal.h"

namespace hexadecimal {

// TODO: add your solution here

    int convert(const std::string& hexa){
        int factor = 1;
        int result = 0;
        for(int i = hexa.size() - 1; i>=0 ; i--){
            char c = hexa[i];
            if(isdigit(c)){
                result += (c - '0') * factor;
            }
            else if(isalpha(c) && c < 'g'){
                result += (c - 'a' + 10 ) * factor;
            }
            else{
                return 0;
            }
            
            factor *= 16;
        }
        return result;
    }
}  // namespace hexadecimal
