#include "difference_of_squares.h"

namespace difference_of_squares {

// TODO: add your solution here
    int square_of_sum(int x){
        int a = 0;
        for(int i=1;i<=x;i++){
            a += i;
        }
        return a * a;
    }

    int sum_of_squares(int x){
        int b = 0;
        for(int i=1;i<=x;i++){
            b += i*i;
        }
        return b;
    }

    int difference(int x){
        return square_of_sum(x) -sum_of_squares(x) ;
    }

    

}  // namespace difference_of_squares
