#include "reverse_string.h"

namespace reverse_string {

// TODO: add your solution here
     std::string reverse_string(std::string text){
         for(size_t i=0;i<text.size()/2; i++){
             char c = text[i];
             text[i] = text[text.size()- i - 1];
             text[text.size()- i - 1] = c;
         }
         return text;
     }
}  // namespace reverse_string
