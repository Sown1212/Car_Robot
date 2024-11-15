#ifndef CAR_HPP
#define CAR_HPP

class Car{
    public:
        bool state[5];
        void forward();
        void backward();
        void left();
        void right();
        void stop();
};

#endif