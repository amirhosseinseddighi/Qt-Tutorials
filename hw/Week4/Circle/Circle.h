#pragma once

#define PI 3.14
class Circle{
    public:
        // Radius
        float radius;
        // Constructors
        Circle();
        Circle(float rad);
        // Functions
        float P();
        float S();
        float compare(Circle cir1,Circle cir2);
};