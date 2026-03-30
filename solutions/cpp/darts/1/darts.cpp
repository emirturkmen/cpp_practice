#include "darts.h"

namespace darts {

// TODO: add your solution here
    int score(double x, double y){
        double pow_x = x*x;
        double pow_y = y*y;
        if(pow_x + pow_y <= 1){
            return 10;
        }
        else if(pow_x + pow_y <= 25){
            return 5;
        }
        else if (pow_x + pow_y <= 100){
            return 1;
        }
        return 0;
    }

}  // namespace darts
