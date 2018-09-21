#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

    float xPos = ofGetWidth()/2;
    float xSpeed = 1;
    float xDirection = 1;
    
    float yPos = ofGetHeight()/2;
    float ySpeed = 1;
    float yDirection = 1;
};
