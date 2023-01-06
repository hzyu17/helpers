#include "../helpers/timer.h"

int main(){
    Timer timer;
    timer.start();
    
    double a = 1.0;
    double b = 2.0;
    std::cout << b-a << std::endl;

    timer.end();

    return 0;

}