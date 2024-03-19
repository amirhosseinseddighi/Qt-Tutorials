#include "Circle.h"

Circle::Circle() {
    radius = 0.0;
}

Circle::Circle(float rad) {
    radius = rad;
}

float Circle::P() {
    return 2 * radius * PI;
}

float Circle::S() {
    return PI * (radius * radius);
}

float Circle::compare(Circle cir1,Circle cir2) {
    float r1 = cir1.radius;
    float r2 = cir2.radius;
    if(r1 > r2) return r1;
    return r2;
}