#pragma once

#include "ofMain.h"
#include "Dots.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

        Dots dot[150];
        float limit_of_distance;
        ofSpherePrimitive sphere;

};
