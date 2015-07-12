#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    limit_of_distance = 100.0;
    ofEnableSmoothing(); 
    ofBackground(0);
    
    for (int i = 0; i < sizeof(dot) / sizeof(dot[0]); i++) {
        ofVec3f v(ofRandom(1028), ofRandom(768), ofRandom(-30, 30));
        float radius = ofRandom(-30, 30);
        dot[i].set(v, radius);
    }

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    for (int i = 0; i < sizeof(dot) / sizeof(dot[0]); i++) {
        Dots cDot = dot[i];
        sphere.set(cDot.radius, 4);
        sphere.setPosition(cDot.vec);
        sphere.drawWireframe();
        for (int j = 0; j < sizeof(dot) / sizeof(dot[0]); j++) {
            if (cDot.vec.distance(dot[j].vec) <=  limit_of_distance) {
                ofLine(cDot.vec, dot[j].vec);
            }
        }
    }

}
