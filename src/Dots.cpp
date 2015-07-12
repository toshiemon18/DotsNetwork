#include "Dots.h"

void Dots::set(float x, float y, float z, float r) {
    loc.set(x, y, z);
    radius = r;
    damping = 0.1;
    limit_of_dist = 150.0;
}

void Dots::setLocation(ofVec3f l) {
    loc.set(l);
}

void Dots::update() {
    loc.limit(50.0); //速度規制
    loc += (1 - damping) * vel; // 座標移動と速度の減衰をする
}

float Dots::getX() {
    return loc.x;
}

float Dots::getY() {
    return loc.y;
}
