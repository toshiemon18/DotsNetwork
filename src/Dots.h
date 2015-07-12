#pragma once

#include "ofMain.h"

class Dots : public ofBaseApp {

    public:
        void set(float x, float y, float z, float r);
        void setLocation(ofVec3f l);
        void update();
        float getX();
        float getY();

        ofVec3f loc;
        ofVec3f vel;
        float radius;
        float damping;
        float limit_of_dist;

};
