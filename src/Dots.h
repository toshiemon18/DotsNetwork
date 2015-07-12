#include "ofMain.h"

class Dots : public ofBaseApp {

    public: 
        float radius;
        float LimitOfDistance;
        ofVec3f vec;

        void set(ofVec3f v, float radius);

};
