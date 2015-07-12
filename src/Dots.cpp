#include "Dots.h"
#include "ofApp.h"

void Dots::set(ofVec3f v, float radius) {
    vec.set(v);
    radius = radius;
    LimitOfDistance = 30.0;
}

