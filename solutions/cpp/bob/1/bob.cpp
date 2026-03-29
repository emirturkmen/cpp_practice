#include "bob.h"
#include <cctype>
namespace bob {
    bool isYelling(std::string text){
        std::string upp = "";
        bool hasletter = false;
        for(char c: text){
            if(isalpha(c)){
                hasletter = true;
            }
            upp += toupper(c);
        }
        return text == upp && hasletter;
    }

    bool isQuestion(std::string text){
        char lastchar = 'a';
        for(char c: text){
            if(ispunct(c)){
                lastchar = c;
            }
        }
        return lastchar == '?';
    }

    bool isSilence(std::string text){
        for(char c : text){
            if(!isspace(c)){
                return false;
            }
        }
        return true;
    }

// TODO: add your solution here
    std::string hey(std::string text){
        if(isSilence(text)){
            return "Fine. Be that way!";
        }
        else if(isYelling(text) && isQuestion(text)){
            return "Calm down, I know what I'm doing!";
        }
        else if(isYelling(text)){
            return "Whoa, chill out!";
        }
        else if(isQuestion(text)){
            return "Sure.";
        }
        
        else{
            return "Whatever.";
        }
    }
}  // namespace bob
